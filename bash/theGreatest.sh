#!/usr/bin/env bash

read -p "Num1: " num1
read -p "Num3: " num2
read -p "Num3: " num3

if [ $num1 -gt $num2 ]
then
	if [ $num1 -gt $num3 ]
	then
		echo "$num1 is greatest."
	fi
elif [ $num2 -gt $num1 ]
then
	if [ $num2 -gt $num3 ]
	then
		echo "$num2 is greatest"
	fi
elif [ $num3 -gt $num1 ]
then
	if [ $num3 -gt $num2 ]
	then
		echo "$num3 is greatest."
	fi
fi

