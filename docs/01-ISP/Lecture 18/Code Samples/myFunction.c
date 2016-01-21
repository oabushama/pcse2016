#include <stdio.h>

void add(){
	int a, b, c;
	printf("\n Enter Any 2 Numbers : ");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	c = a + b;
	printf("\n Addition is : %d",c);
}
int main(){
	//void add();
	add();
	return 0;
}


