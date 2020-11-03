#!/bin/bash
yes=1
while [ $yes -eq 1 ];do
echo "1.Ascending Order Sorting"
echo "2.Descending Order Sorting"
read choice
case "$choice" in
"1") echo "Ascending order" 
echo "how many numbers you want to arrange??"
read n
echo "enter numbers in array"
for((i=0;i< $n; i++ )) 
do
read nos[$i]
done
echo "numbers in an array are"
for(( i=0; i< $n; i++ )) 
do
echo ${nos[$i]}
done
for(( i=0; i< $n; i++))
do
for(( j=$i;j< $n; j++))
do
if [ ${nos[$i] } -gt ${nos[$j]} ];
then
t=${nos[$i]}
nos[$i]=${nos[$j]}
nos[$j]=$t
fi
done
done
echo "sorted numbers are"
for(( i=0; i< $n; i++ )) 
do
echo ${nos[$i]} 
done ;;
"2") echo "Descending order"
echo "how many numbers do you want to arrange??"
read n
echo "enter numbers in array"
for((i=0;i< $n; i++ )) 
do
read nos[$i]
done
echo "numbers in an array are"
for(( i=0; i< $n; i++ )) 
do
echo ${nos[$i]}
done
for(( i=0; i< $n; i++))
do
for(( j=$i;j< $n; j++))
do
if [ ${nos[$i] } -lt ${nos[$j]} ];
then
t=${nos[$i]}
nos[$i]=${nos[$j]}
nos[$j]=$t
fi
done
done
echo "sorted numbers are"
for(( i=0; i< $n; i++ )) 
do
echo ${nos[$i]}
done ;;
esac
echo "Do you want to Continue ?"
echo enter 1.For yes 2.For no
read ans
if [ $ans -eq 2 ];then
break
fi
if [ $ans -eq 1 ];then
continue
else
echo
echo "invalid choice...!"
continue
fi
done
