#!/bin/sh
#n=1;
echo $1
if [ $#=3 ]; then
	dir=$1; arg1=$2 ; arg2=$3;
else
	arg1=$1; arg2=$2;
fi
#cd $dir 
ls *.$arg1 |  
while read file  
do
	
	name=$(echo $file |cut -d '.' -f 1)
	mv $file  "$name".$arg2
done 
