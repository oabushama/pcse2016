/* to compile: gcc -o arrayExample arrayExample.c */

#include <stdio.h>
int main(){
	int i;
	int age[4];
	age[0]=23;
	age[1]=34;
	age[2]=65;
	age[3]=74;

	for(i=0; i<4; i++){
		printf("age[%d]: %d\n", i,age[i]);
	}
	return 0;
}

