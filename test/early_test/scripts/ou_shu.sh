#!/bin/bash

if [ $# = 0 ]
then
	echo "too little "
	exit
elif [ $# -gt 10 ]
then
	echo "too many "
	exit
fi

for number
do 
	echo $number
	count='expr $number % 2'   #here something is wrong, the value of count is not calculated , it's  the string  :  expr number % 2
	 echo $count
	if [ $count -eq 1 ]
	then
		continue
	else
		output="$output $number"
	fi
done
echo "even numbers : $output"
