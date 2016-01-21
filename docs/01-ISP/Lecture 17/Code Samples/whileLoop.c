/* to compile: gcc -o whileLoop whileLoop.c */

#include<stdio.h>
int main(){
	int counter, value;
	value = 5;
	counter = 0;
	while ( counter < value){
		counter++;
		printf("counter value is: %d\n", counter);
	}
	return 0;
}

