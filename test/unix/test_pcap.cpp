#include<stdio.h>
#include<pcap.h>
#include<string>

using namespace std;

static const unsigned int ETHER_ADDR_LEN = 6;	
void call_back(u_char * args, const struct pcap_pkthdr * header, const u_char * packet);
string generate_mac_address(char macChars[ETHER_ADDR_LEN]);

int main(){
	pcap_t * handle; // Sesion handle
	char dev[] = "eth2";  //device to sniff on
	char errbuf[PCAP_ERRBUF_SIZE]; // error string
	char filter_exp[] = "";  //filter expression
	bpf_u_int32 mask;  //The netmask of our sniffing device
	bpf_u_int32 net;   //The IP of our sniffing device

	struct bpf_program fp;  //the compiled filter expression
	
	//查询device的mask和ip	
	if (pcap_lookupnet(dev, &net, &mask, errbuf) == -1){
		fprintf(stderr, "Can't get netmask for device %s\n", dev);
		net = 0;
		mask = 0;
	}

	//obtaining packet capture descriptor
	handle = pcap_open_live(dev, BUFSIZ, 1, 1000, errbuf);
	if(handle == NULL){
		fprintf(stderr, "Can't open device %s\n", dev);
		return 2;
	}
	
	// before apply filter exp, compile it 
	if(pcap_compile(handle, &fp, filter_exp, 0, net) == -1){
		fprintf(stderr, "can't parse filter %s: %s\n", filter_exp, pcap_geterr(handle));
		return 2;
	}	
	//apply filter to this session
	if(pcap_setfilter(handle, &fp) == -1){
		fprintf(stderr, "can't install filter %s: %s\n", filter_exp, pcap_geterr(handle));
		return 2;
	}

	// now the device is prepared to sniff under the filter condition
	struct pcap_pkthdr header; // packet header struct
	const u_char * packet;  // actual packet
	
	//5表示积累5个包pcap_loop才返回，但每个包都会调一次call_back
	while(!pcap_loop(handle, 5, call_back, NULL)){
		printf("-------\n");  //每8行才会输出一次这个
	}
	pcap_close(handle);
}

struct sniff_ethernet {
		char ether_dhost[ETHER_ADDR_LEN]; /* Destination host address */
		char ether_shost[ETHER_ADDR_LEN]; /* Source host address */
		u_short ether_type; /* IP? ARP? RARP? etc */
};

// call_back function的统一原型
void call_back(u_char * args, const struct pcap_pkthdr * header, const u_char * packet){
	static int count = 0;
	struct sniff_ethernet * ethernet;  //ethernet header
	ethernet = (struct sniff_ethernet*)(packet);
	
	//把6字节的字符串转换成mac地址的表示形式
	std::string source_mac_address = generate_mac_address(ethernet->ether_shost);
	std::string dst_mac_address = generate_mac_address(ethernet->ether_dhost);

	printf("wy: call_back called %d,  %s->%s,   packet length:%d\n", count++, source_mac_address.c_str(), dst_mac_address.c_str(),  header->len);
}

//由字节为单位字符串生成mac地址，16进制数的字串
string generate_mac_address(char macChars[ETHER_ADDR_LEN]){
	string macAddr;
	char temp[2];
	for(int i = 0; i < ETHER_ADDR_LEN; i++){
		//把一个字节转化成16进制表示形式
		sprintf(temp, "%x", macChars[i]);
		if(i != 0){
			macAddr.append(":");
		}
		macAddr.append(temp, 2);
	}
	return macAddr;
}

