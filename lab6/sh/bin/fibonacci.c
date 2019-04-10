#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int N){
  int value=0; 

  if (N==1){  //if N is 1, the result of the factorial is also 1 
 	 return 1;
  }
  else if (N==0)
  	 return 0; 	  
  else
  	 return (value=Fibonacci(N-2)+Fibonacci(N-1));  
  	 
}

int main (int argc, char *argv[]){ 
/*if argc is not 2, argv[1] will not be saved in variable n*/

 if (argc!=2){
   perror("Please type in two arguments");
   return 0; 
 }

int n= atoi(argv[1]);
  printf("%dth number is %d \n", n, Fibonacci(n)); 
  //print out the result of n factorial
  return 0; 

}
