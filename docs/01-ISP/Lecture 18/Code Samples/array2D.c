#include <stdio.h>
int main(){
  int i, j;
  int xArray[2][2] = {{1, 2}, {3, 4}};
  int yArray[2][2] = {{1,2},{3,4}};
  int zArray[2][2] = {{0,0},{0,0}};
  for (i=0; i< 2; i++){
    for (j=0; j <2; j++){
       zArray[i][j] = xArray[i][j] + yArray[i][j];
    }
  }
  for (i=0; i< 2; i++){
    for (j=0; j <2; j++){
       printf(" %d ", zArray[i][j]);
    }
    printf("\n");
  }
  return 0;
}
