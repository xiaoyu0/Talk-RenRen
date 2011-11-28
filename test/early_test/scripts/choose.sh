#!/bin/bash

if [ $# = 0 ]
then 
	echo "choose a file"
	exit
fi
case $1 in
file1)	echo "you choose file1";;
file2)	echo "you choose file2";;
*)	echo "you should choose either file1 or file2";;
esac
