/* to compile: gcc -o mycontinue myContinue.c */

#include <stdio.h>

int main(){
	int i;
	i = 0;
	while ( i < 20 ){
		i++;
		continue;
		printf("Nothing to see\n");
	}
	return 0;
}


