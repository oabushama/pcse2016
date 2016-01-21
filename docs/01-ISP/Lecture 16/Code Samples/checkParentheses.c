/*to compile: gcc -o checkParentheses checkParantheses.c*/
#include <stdio.h>
int main(){
	int total;
	//char value;
	//multiplication has higher precedence than subtraction
	total=100-25*2;
	printf("The total is: $%d \n",total);
	//parentheses make a lot of difference!
	total=(100-25)*2;
	printf("The total is: $%d \n",total);
	return(0);
}

