#!/usr/bin/env bash

#Bash script to show how to use variables.


space='		S	P	A	C	E	'
line='						'

echo -e "$line $(echo "\n $line $(echo "\n $line")")"
echo "$space"
echo -e "$line $(echo "\n $line $(echo "\n $line")")"

