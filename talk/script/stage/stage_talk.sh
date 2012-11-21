#!/bin/sh
export LANG=en_US.UTF-8
PS3="Select an option and press Enter: "

#Please change the project related variables
PRJ="renren-wap-talk"
SVN_URL="http://svn.d.xiaonei.com/wap/renren/$PRJ/trunk"
LOCAL_SRC="/data/staging/$PRJ"
LOCAL_APP="/data/$PRJ"

echo "   ____            ____              _____  ____ "
echo "  |  _ \ ___ _ __ |  _ \ ___ _ __   |___ / / ___|"
echo "  | |_) / _ \ '_ \| |_) / _ \ '_ \    |_ \| |   _"
echo "  |  _ <  __/ | | |  _ <  __/ | | |  ___) | |_| |"
echo "  |_| \_\___|_| |_|_| \_\___|_| |_| |____/ \____|"

echo -e "\n"
tput smso
echo "========================= NOTICE =========================="
echo "|*** This is the stage process for 3g talk push server ***|"
echo "|******** Copyright 2011 you.zhou@renren-inc.com *********|"
echo "|**************** All rights reserved ********************|"
echo "==========================================================="
tput rmso
echo -e "\n"

STAGE_OPT="1"
echo "[Stage options]"
select SEL_ITEM in "Auto" "Manual" "Exit"
do
	case $SEL_ITEM in
		"Auto")
			STAGE_OPT="0"
			break
			;;
		"Manual")
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

if [ $STAGE_OPT -eq "0" ]; then
	echo "Staging $PRJ automatically!"
fi

if [ $STAGE_OPT -eq "1" ]; then
	echo "Staging $PRJ manually!"
fi

tput smso
echo "[Step 1] Export the project from svn."
tput rmso

REV_OPT="0"

if [ $STAGE_OPT -eq "1" ]; then
	SEL_ITEM0="Export the lastest HEAD revision."
	SEL_ITEM1="Export the specified revision."
	SEL_ITEM2="Exit"
	echo "[SVN export options]"
	select SEL_ITEM in "$SEL_ITEM0" "$SEL_ITEM1" "$SEL_ITEM2"
	do
		case $SEL_ITEM in
			"$SEL_ITEM0")
				break
				;;	
			"$SEL_ITEM1")
				REV_OPT="1"
				break
				;;	
			"$SEL_ITEM2")
				exit 0
				;;	
			*)
				echo "[ERROR] invalid selection!"
				;;
		esac
	done
fi

REV=""

if [ $REV_OPT -eq "0" ]; then
	REV=`svn info $SVN_URL@'HEAD' | grep ^Revision: | awk -F': ' '{print $2}'`		
fi

if [ $REV_OPT -eq "1" ]; then
	while true
	do
		echo -e "Enter revision:\c"

		echo -e " \c"

		read REV
		if [[ "$REV" =~ "^[0-9]+$" ]] ; then
			break
		else
			echo -e "[ERROR] $REV is not a valid revision number, please input again!\n"
		fi
	done
fi

SVN=hippo

TAG="-r$REV"

echo "Exporting project : $PRJ"
rm -rf $LOCAL_SRC
svn export $TAG $SVN_URL $LOCAL_SRC

tput smso
echo "[Step 2] Build $PRJ."
tput rmso

if [ $STAGE_OPT -eq "1" ]; then
	select SEL_ITEM in "Continue" "Exit"
	do
		case $SEL_ITEM in 
			"Continue")
				break
				;;
			"Exit")
				exit 0
				;;
			*)
				break
				;;
		esac
	done
fi

echo "Compiling and building c++ sources."
cd $LOCAL_SRC/build
cmake ../src/
make

echo "********** $PRJ staged successfully! **********"

echo " ____                               __       _   _"
echo "/ ___| _   _  ___ ___ ___  ___ ___ / _|_   _| | | |"
echo "\___ \| | | |/ __/ __/ _ \/ __/ __| |_| | | | | | |"
echo " ___) | |_| | (_| (_|  __/\__ \__ \  _| |_| | | |_|"
echo "|____/ \__,_|\___\___\___||___/___/_|  \__,_|_| (_)"

