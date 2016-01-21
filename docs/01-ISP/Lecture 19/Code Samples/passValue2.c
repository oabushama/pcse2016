#include <stdio.h>
#include <stdlib.h>

void add(int a, int b){
  int c;
  c = a + b;
  printf("\n Addition is : %d",c);
}

int main(int argc, char *argv[]){
  int a, b;
  if ( argc != 3 ){
	     printf("\nInsufficient number of arguments.\n");
         printf( "\nUsage: %s <firstNumber> <secondNumber>", argv[0] );
  }else{
  	  a = atoi(argv[1]);
  	  b = atoi(argv[2]);
  	  add(a, b);
  }
  return 0;
}
