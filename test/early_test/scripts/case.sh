#!/bin/bash

echo "do you like linux " 
read like
case $like in
y|Y|yes)  echo "you like it " ;;
n|N|no)   echo "you should try it " ;;
*) 	  echo "your answer is : $like" ;;

esac
