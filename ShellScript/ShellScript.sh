#!/bin/bash

projectFunc0()
{
printf "please enter Station name to search:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$1 == patt' file.csv
}

projectFunc1()
{
echo "Longitude  searching:"
read Longitude
grep $Longitude file.csv
}

projectFunc2()
{
echo "Latitude searching:"
read Latitude
grep $Latitude file.csv
}

projectFunc3()
{

printf "please enter O3- Value:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$7 == patt' file.csv
}


projectFunc4()
{

printf "please enter NO2 Value:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$10 == patt' file.csv
}

projectFunc5()
{
printf "please enter PM10 Value:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$13 == patt' file.csv


}

echo "please press 0 to search by Station"
echo "please press 1 to search by Longitude"
echo "please press 2 to search by Latitude"
echo "please press 3 to search by O3 Value"
echo "please press 4 to search by NO2 Value"
echo "please press 5 to search by PM10 Value"

read input
printf " $choice \n%s";

if [ "$input" -eq 0 ]; 
then
projectFunc0
elif [ "$input" -eq 1 ]; 
then
projectFunc1
elif [ "$input" -eq 2 ]; 
then
projectFunc2
elif [ "$input" -eq 3 ];
then
projectFunc3

elif [ "$input" -eq 4 ];
then
projectFunc4
elif [ "$input" -eq 5 ]; 
then
projectFunc5

else 
echo "Sorry invalid input.please enter either 1 or 2 or 3 or 4 or 5"
fi