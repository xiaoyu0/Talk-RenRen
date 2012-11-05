/*
    Copyright (c)  2006, 2007		Dmitry Butskoy
					<buc@citadel.stu.neva.ru>
    License:  GPL v2 or any later

    See COPYING for the status of this software.
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/poll.h>
#include <netinet/in.h>
#include <netinet/udp.h>

#include "traceroute.h"


#ifndef IPPROTO_UDPLITE
#define IPPROTO_UDPLITE	136
#endif

#ifndef UDPLITE_SEND_CSCOV
#define UDPLITE_SEND_CSCOV	10
#define UDPLITE_RECV_CSCOV	11
#endif


static sockaddr_any dest_addr = {{ 0, }, };   // 每个模块都定义了这样一个dest_addr,用来装从 main 中过来的 dst_addr (最终目地的）
static unsigned int curr_port = 0; //当前发送包的目的端口
static unsigned int protocol = IPPROTO_UDP;


static char *data = NULL;
static size_t *length_p;  //?为什么要用指针

static void fill_data (size_t *packet_len_p) {  // 这个函数就是给 data  按 length_p  malloc 空间，然后填充
	int i;

	length_p = packet_len_p;

	if (*length_p &&
	    !(data = malloc (*length_p))
	)  error ("malloc");

        for (i = 0; i < *length_p; i++)
                data[i] = 0x40 + (i & 0x3f);
 
	return;
}


static int udp_default_init (const sockaddr_any *dest,   // 这个函数就初始化了 curr_port,(这是指定目地端口的，默认的当然很大） 然后通过传进来的长度 fill_data
				unsigned int port_seq, size_t *packet_len_p) {

	curr_port = port_seq ? port_seq : DEF_START_PORT;  // port_seq （definded in traceroute.c) 若是没通过 -p 指定，为0

	dest_addr = *dest;
	dest_addr.sin.sin_port = htons (curr_port);  // 可能是因为 这里重新设置了 port 所以要重新赋一下
						//dest_addr 中有 IP 和  port ,  以这个 dest_addr 来发包
	fill_data (packet_len_p);

	return 0;
}


static int udp_init (const sockaddr_any *dest,
			    unsigned int port_seq, size_t *packet_len_p) {

	dest_addr = *dest;

	if (!port_seq)  port_seq = DEF_UDP_PORT;
	dest_addr.sin.sin_port = htons ((u_int16_t) port_seq);
	
	fill_data (packet_len_p);
 
	return 0;
}


static unsigned int coverage = 0;
#define MIN_COVERAGE	(sizeof (struct udphdr))

static void set_coverage (int sk) {
	int val = MIN_COVERAGE;

	if (setsockopt (sk, IPPROTO_UDPLITE, UDPLITE_SEND_CSCOV,
					    &coverage, sizeof (coverage)) < 0
	)  error ("UDPLITE_SEND_CSCOV");

	if (setsockopt (sk, IPPROTO_UDPLITE, UDPLITE_RECV_CSCOV,
					    &val, sizeof (val)) < 0
	)  error ("UDPLITE_RECV_CSCOV");
}
	
static CLIF_option udplite_options[] = {
	{ 0, "coverage", "NUM", "Set udplite send coverage to %s (default is "
				_TEXT(MIN_COVERAGE) ")",
				CLIF_set_uint, &coverage, 0, CLIF_ABBREV },
	CLIF_END_OPTION
};

static int udplite_init (const sockaddr_any *dest,
			    unsigned int port_seq, size_t *packet_len_p) {

	dest_addr = *dest;

	if (!port_seq)  port_seq = DEF_UDP_PORT;    /*  XXX: Hmmm...   */
	dest_addr.sin.sin_port = htons ((u_int16_t) port_seq);

	protocol = IPPROTO_UDPLITE;

	if (!coverage)  coverage = MIN_COVERAGE;
	
	fill_data (packet_len_p);
 
	return 0;
}

// 这个函数主要是 send  和   add_poll 以及设置了 pb->sk, pb->seq, pb->send_time
static void udp_send_probe (probe *pb, int ttl) {
	int sk;
	int af = dest_addr.sa.sa_family;


	sk = socket (af, SOCK_DGRAM, protocol); 
	if (sk < 0)  error ("socket");

	tune_socket (sk);	/*  common stuff   */  //每次每配 socket后都要调用的

	if (coverage)  set_coverage (sk);	/*  udplite case   */  // ??
	set_ttl (sk, ttl);


	/*	{
			int n=0;
			setsockopt (sk, SOL_SOCKET, SO_TIMESTAMP, (void *)&n, sizeof(n));
		}*/
	if (connect (sk, &dest_addr.sa, sizeof (dest_addr)) < 0) // connect 是专用于TCP client的,为什么udp 在用 connet  //自己定义一个union 来存放 ip地址的好处，这里可以直接用 &dest_addr.a
		error ("connect");

	use_recverr (sk); //??


	pb->send_time = get_time ();  

	if (do_send (sk, data, *length_p, NULL) < 0) {  // ops->init(...)就 fill过了 ,这里最后一个参数，目的地址为null,因为之前已经 connect 过了
	    close (sk);
	    pb->send_time = 0;
	    return;
	}


	pb->sk = sk; //每个 probe对应该的socket

	add_poll (sk, POLLIN | POLLERR); // ??这个函数所使用的全局变量 是 static 的， 在poll.c中

	pb->seq = dest_addr.sin.sin_port;  // pb 的 seq  是目的的 port  (我们要往那个port发，  port大得不可能)

	if (curr_port) {	/*  traditional udp method   */
	    curr_port++;
	    dest_addr.sin.sin_port = htons (curr_port);	/* both ipv4 and ipv6 */  //修改了curr_port ，马上改dest_addr
	}

	return;
}


static probe *udp_check_reply (int sk, int err, sockaddr_any *from,
						    char *buf, size_t len) {
	probe *pb;

	pb = probe_by_sk (sk);
	if (!pb)  return NULL;

	if (pb->seq != from->sin.sin_port)  // here?? 为什么要相等 
		return NULL;

	if (!err)  pb->final = 1;   //也就是说poll的结果没有 POLLERR 的话就将 pb->final = 1,这里没有搞懂， POLLERR 到底是在什么情况下会有

	return pb;
}


static void udp_recv_probe (int sk, int revents) {

	if (!(revents & (POLLIN | POLLERR)))  //即 revents 一定要有 POLLIN 或 POLLERR
		return;

	recv_reply (sk, !!(revents & POLLERR), udp_check_reply); //这里中间的参数是传给被调用函数的err
}


static void udp_expire_probe (probe *pb) {

	probe_done (pb);
}


/*  All three modules share the same methods except the init...  */

static tr_module default_ops = {
	.name = "default",
	.init = udp_default_init,
	.send_probe = udp_send_probe,
	.recv_probe = udp_recv_probe,
	.expire_probe = udp_expire_probe,
	.user = 1,
	.header_len = sizeof (struct udphdr),
};

TR_MODULE (default_ops);


static tr_module udp_ops = {
	.name = "udp",
	.init = udp_init,
	.send_probe = udp_send_probe,
	.recv_probe = udp_recv_probe,
	.expire_probe = udp_expire_probe,
	.user = 1,
	.header_len = sizeof (struct udphdr),
};

TR_MODULE (udp_ops);


static tr_module udplite_ops = {
	.name = "udplite",
	.init = udplite_init,
	.send_probe = udp_send_probe,
	.recv_probe = udp_recv_probe,
	.expire_probe = udp_expire_probe,
	.user = 1,
	.header_len = sizeof (struct udphdr),
	.options = udplite_options,
};

TR_MODULE (udplite_ops);
