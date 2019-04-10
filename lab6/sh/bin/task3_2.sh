#!/bin/bash

n=$1

    if [ $n -eq 0 ];
    then
	fiboIsN=0
    elif [ $n -eq 1 ];
    then 
        fiboIsN=1
    else 
	fiboPrev=0
	fiboIsN=1
        for (( i=1; i<n; i++ ))
	do 
	temp=$fiboIsN
	let "fiboIsN=fiboIsN+fiboPrev"
	fiboPrev=$temp
        done
    fi 
    
printf "$n th number in Fibonacci is $fiboIsN\n"	  
	
