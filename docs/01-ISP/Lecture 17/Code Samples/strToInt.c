/*to compile: gcc -o strToInt strToInt.c */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int age;
	char enterAge[8];
	printf("How old is your friend?\n");
	fflush(stdout);
	gets(enterAge);
	age = atoi(enterAge);
	printf("Your friend's age is: %d", age);
	return(0);
}


