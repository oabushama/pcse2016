#include <stdio.h>
int i = 1812;
int main(){
	printf("In function, global variable: %d\n", i);
	int i= 1912;
	printf("In function, before block: %d\n", i);
	{
		int i = 2012;
		printf("In function, inside block: %d \n", i);
	}
	printf("In function, after block: %d\n", i);
	return 0;
}
