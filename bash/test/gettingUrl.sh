#!/usr/bin/env bash

#Extended regex usage

url='https:/guide.bash.academy/myvariables.html'
echo "$url"

#Remove the shortest string that matches the pattern if its at the...
#...the start of the value.
echo "${url#*/}"

#Remove the longest string that matches the pattern if its at the...
#...start of the value.
echo "${url##*/}"

#Remove the shortest string that matches the pattern if its at the...
#...end of the value.
echo "${url%/*}"

#Remove the longest string that matches the pattern if its at the...
#...end of the value.
echo "${url%%/*}"

#Replace the first occurrence of the pattern with the second pattern.
echo "${url/./-}"

#Replace each occurrence of the first pattern with the second pattern.
echo "${url//./-}"

#The first four methods can be conbined with the last two for...
#...extended functionality.

#Expand the length of the string in bytes.
echo "${#url}"

#Expand the value starting at a particular position.
startt=2;
length=4;
echo "${url:$startt:$length}"

#Lower-casing or upper-casing characters in the value.
pattern1='[a-z]'
pattern2='[A-Z]'
smallLetters="a,b,c,d,e,f"
bigLetters="A,B,C,D,E,F"
echo "$smallLetters"

echo "${smallLetters^^$pattern1}"
echo "${bigLetters,,$pattern2}"
