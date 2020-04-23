#!/usr/bin/env bash

read -p "Factorial of: " num

fact=1
input=$num

while [[ $num -gt 0 ]]
do
	fact=$(expr $fact \* $num )
	num=$(expr $num - 1)
done

echo "Factorial of $input: $fact"
