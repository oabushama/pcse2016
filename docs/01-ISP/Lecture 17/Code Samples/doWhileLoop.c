/* to compile: gcc -o dowhileLoop doWhileLoop.c */

#include<stdio.h>
int main(){
	int counter, value;
	value = 5;
	counter = 0;
	do{
		counter++;
		printf("counter value is: %d\n", counter);
	} while ( counter < value);
	return 0;
}



