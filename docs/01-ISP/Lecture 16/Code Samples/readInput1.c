/*to compile: gcc -o readInput1 readInput1.c*/

#include <stdio.h>
int main(){
  char myName[50];
  printf("What is your name?");
  fflush(stdout);
  scanf("%s", &myName);
  printf("Hello %s!", &myName);
  return(0);
}


