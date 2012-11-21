#!/bin/sh
export LANG=en_US.UTF-8
PS3="Select an option and press Enter: "

#Please change the project related variables
PRJ="renren-wap-talk"
LOCAL_APP="/data/staging/$PRJ"
REMOTE_IPS=("10.3.19.15 10.3.19.18 10.3.19.19 10.3.19.22 10.7.16.25 10.7.16.26 10.9.16.20 10.9.16.34")

echo "   ____            ____              _____  ____ "
echo "  |  _ \ ___ _ __ |  _ \ ___ _ __   |___ / / ___|"
echo "  | |_) / _ \ '_ \| |_) / _ \ '_ \    |_ \| |   _"
echo "  |  _ <  __/ | | |  _ <  __/ | | |  ___) | |_| |"
echo "  |_| \_\___|_| |_|_| \_\___|_| |_| |____/ \____|"

echo -e "\n"
tput smso
echo "========================= NOTICE ========================="
echo "|This is the deploy process for image cache application *|"
echo "|******* Copyright 2010 zhidong.yan@opi-corp.com ********|"
echo "|*************** All rights reserved ********************|"
echo "=========================================================="
tput rmso
echo -e "\n"

tput smso
echo "[Step 1] Upload $PRJ to remote servers."
tput rmso
echo -e "\n"

CNT="1"

for REMOTE_IP in ${REMOTE_IPS[@]}
do
	tput smso
	echo "-[Step 1.$CNT] Deploy $PRJ/talk to remote server $REMOTE_IP and restart $PRJ/talk."
	tput rmso
	select SEL_ITEM in "Yes" "No" "Exit"
	do
		case $SEL_ITEM in 
			"Yes")
				echo "Copying talk to $REMOTE_IP:/data/talk"
				scp /data/staging/$PRJ/build/talk root@$REMOTE_IP:/data/talk
				ssh root@$REMOTE_IP "export LANG=en_US.UTF-8;\
				cd /service;\
				svc -dk talk;\
				mv /opt/talk/bin/talk /opt/talk/bin/talk_$(date +%Y-%m-%d-%H_%M_%S).bak;\
				mv /data/talk /opt/talk/bin/talk;\
				svc -u talk;"
				echo "******* deploy talk to $REMOTE_IP OK! *********"
				break
				;;
			"No")
				break
				;;
			"Exit")
				exit 0
				;;
			*)
				echo "[ERROR] invalid selection!"
				;;
		esac
	done
	CNT=`expr $CNT + 1`
done

echo "********** $PRJ deployment successfully! **********"

echo " ____                               __       _   _"
echo "/ ___| _   _  ___ ___ ___  ___ ___ / _|_   _| | | |"
echo "\___ \| | | |/ __/ __/ _ \/ __/ __| |_| | | | | | |"
echo " ___) | |_| | (_| (_|  __/\__ \__ \  _| |_| | | |_|"
echo "|____/ \__,_|\___\___\___||___/___/_|  \__,_|_| (_)"

