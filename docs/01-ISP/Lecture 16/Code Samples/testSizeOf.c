/*to compile: gcc -o testSizeOf testsizeOf.c */

#include <stdio.h>
int main(){
  char c;
  int x;
  printf("\nSize of variable c is %d bytes,size of variable x is %d bytes\n", sizeof (c), sizeof (x) );
  return(0);
}


