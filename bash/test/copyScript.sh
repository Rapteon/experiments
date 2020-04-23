#!/usr/bin/env bash

read -p "Filename: "

if [[ $(ls $filename 2>/dev/null) ]]
then
	cat > "copyOf$filename" < cat $filename
else
	echo "Not in directory."
fi

