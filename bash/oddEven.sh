#!/usr/bin/env bash

read -p "Enter a number: "

if (( ! $(expr $REPLY % 2) ));then echo "Even."; else echo "Odd."; fi;

