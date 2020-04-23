#!/usr/bin/env bash

read -p "Enter the Year: " year

if (( ! $(expr $year % 4) ))
then
	if (( ! $(expr $year % 100) ))
	then
		if (( ! $(expr $year % 400) ))
		then
			echo "$year is  a leap year."
		else
			echo "$year is not a leap year."
		fi
	else
		echo "$year is a leap year."
	fi
else
	echo "$year is not a leap year."
fi
