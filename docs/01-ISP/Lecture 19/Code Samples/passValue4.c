/* to compile: gcc -o passValue4 passValue4.c */

#include <stdio.h>
int add(int a, int b){
  int c;
  c = a + b;
  printf("Addition is : %d\n",c);
  return c;
}

int main(){
  int a, b, c;
  printf("\n Enter Any 2 Numbers : ");
  fflush(stdout);
  scanf("%d %d",&a,&b);
  printf("a is: %d, b is: %d\n", a, b);
  c = add(a, b);
  printf("a is: %d, b is: %d\n", a, b);
  return 0;
}

