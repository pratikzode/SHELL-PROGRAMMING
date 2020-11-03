#!/bin/bash
echo "Enter the file name "
read fname

ans=1
while [ $ans -eq 1 ]
do
echo -e "\nMENU\n1.Insert \n2.Delete\n3.Modify\n4.Search\n5.Exit\n"
echo -e "Enter the choice : "
read ch

case $ch in
1) echo -e "Enter the data"
echo -e "\nEnter the Name:"
read name
echo -e "\nEnter the City:"
read city
echo -e "\nEnter the Phone number:"
read add

echo -e "$name\t$city\t$add">>$fname
;;

2)
echo -e "Enter the Record to Delete :"
read name
 if grep $name $fname
 then 
	grep -v $name $fname>>temp
	rm $fname 
	mv temp $fname
	echo -e "content after delete \n"
	cat $fname
else
 echo "Record is NOT resent"

fi
;;

3)echo -e "Enter the Record to Modify :"
read name
 if grep $name $fname
 then
	grep -v $name $fname>>temp
	rm $fanme
	mv temp $fname
	echo -e "content after delete \n"
	echo -e "enter the data "
	echo -e "\nEnter the Name:"
	read name
	echo -e "\nEnter the City:"
	read city
	echo -e "\nEnter the Phone number:"
	read add
	echo -e "$name\t$city\t$add">>$fname
else 
 echo "Record is NOT resent"

fi
;;

4) echo -e "Enter the Record to search :"
read name
  grep $name $fname

;;	
5) echo "THANK YOU"
exit 0
;;

esac

echo -e "do u want to continue?(1/0)"
read ans
done
