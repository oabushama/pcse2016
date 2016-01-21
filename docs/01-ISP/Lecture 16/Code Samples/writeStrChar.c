/*
 * check how to print character and string
 *to compile: gcc -o writeStrChar writeStrChar.c
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char c;
	char myName[50];
	strcpy(myName,"Ritu");
	printf("Your name is: %s\n", myName);
	c = 'a';
	printf("The character is: %c \n", c);
	return(0);
}




