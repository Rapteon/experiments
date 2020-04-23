#!/usr/bin/env bash

#Program to print your breakfast in text mode :)

read -p "Would you like some breakfast? [Y/n] :"
if [[ $REPLY == Y || $REPLY == y ]]; then
	echo "Here's an egg sandwich for you."
else 
	echo "At least take some coffee."
fi

read -p "Do you wanna bounce? [Yes/no] : "


#./bounce.out is a simple C program which takes a parameter from the command line and prints a statement accordingly.
if [[ $REPLY == Yes ]]; then ./bounce.out yes; elif [[ $REPLY == no ]]; then ./bounce.out no; else ./bounce.out; fi

