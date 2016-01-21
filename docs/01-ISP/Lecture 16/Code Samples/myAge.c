/*
 * myAge.c
 *to compile: gcc -o myAge myAge.c
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int age;
	age = 10;
	printf("Current value of age is: %d\n", age);
	age=20;
	printf("New value of age is: %d\n", age);
	age = age + 20;
	printf("New updated value of age is: %d\n", age);
	return(0);
}




