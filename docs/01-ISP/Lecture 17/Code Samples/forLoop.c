/* To compile: gcc -o forLoop forLoop.c*/
#include <stdio.h>
int main(){
 int i, sum;
 sum =0;
 for(i= 1 ; i<=100 ; i=i+1){
	 sum = sum + i;
 }
 printf("Sum of first 100 number is: %d ", sum);
 return(0);
}

