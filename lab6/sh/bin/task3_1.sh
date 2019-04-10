#!/bin/bash
#This is a program of reverse pyramid
function pyramid(){
	n=$1
	for (( i=n; i>=1; i-- ))
	do 
		for (( j=n-i ; j>=1; j-- ))
		do
		printf " "
		done 
		
		for (( k=0; k<2*i-1; k++ ))
		do
		printf "*"
		done
		
		printf "\n"		
	done 
}

n=$1
if [ $n -lt 0 ]; then
        exit
elif [ $n -gt 12 ]; then
	echo "Enter smaller number"
else 	
	pyramid $n
fi 	
