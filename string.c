#!/bin/bash
read -p "Enter first string:" string
read -p "Enter second string:" string1
i="y"
while [ $i = "y" ]
do
echo "1.Display"
echo "2.Concatenation"
echo "3.Copy"
echo "4.Length"
echo "5.Palindrome"
echo "6.Exit"
read choice
case "$choice" in
"1") echo "Display" 
	echo "the string is $string ";;
"2") echo "Concatenation"
	string="$string $string1"
	echo "after Concatenation string is ${string}" ;;
"3") echo "Copy"
	str1=${string}
	echo "Copied string is $str1" ;;
"4") echo "Length"
	echo "Length of string is" ${#string} ;;
"5") echo "Palindrome"
	if [[ $(rev <<< "$string") == "$string" ]];then 
		echo "It is a Palindrome"
	fi
	if [[ $(rev <<< "$string") != "$string" ]];then
		echo "it is not a palindrome"
	fi
	;;
"6") echo "Exit"
	echo enter 1.For yes 2.For no
	read ans	
	if [ $ans -eq 1 ];then
	break	
	fi
	if [ $ans -eq 2 ];then
	continue
	else
	echo "invalid choice...!"
	continue
	fi
	esac
	done
