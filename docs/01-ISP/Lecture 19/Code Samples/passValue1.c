/* to compile: gcc -o passValue1 passValue1.c */

#include <stdio.h>
void add(int a, int b){
  int c;
  c = a + b;
  printf("\n Addition is : %d",c);
}

int main(){
  int a, b;
  printf("\n Enter Any 2 Numbers : ");
  fflush(stdout);
  scanf("%d %d",&a,&b);
  add(a, b);
  return 0;
}


