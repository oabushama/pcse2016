#include <stdio.h>
int main(){
  double varA;
  int varB = 2;
  double varC = 9.34;
  varA = varB;
  varB = varC;
  printf("varA: %lf, varB: %d, varC: %lf",varA, varB, varC);
  return 0;
}

