#include<stdio.h>
#include<stdlib.h>

void pyramid(int); 

int main(int argc, char *argv[]){
	if (argc!=2){
		perror("Please type in two arguments");
		return 0;
	}

	int rows = atoi(argv[1]);
	if(rows>12 || rows<1)
		return 0;
	pyramid(rows);
}

void pyramid(int n){
	for(int i=n; i>=1; i--){
		for(int j=n-i; j>=1; j--) printf(" ");
		for(int k=0; k<2*i-1; k++) printf("*");
	        printf("\n"); 
	}
}	
