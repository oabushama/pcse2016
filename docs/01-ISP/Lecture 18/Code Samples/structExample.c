#include <stdio.h>

typedef struct point{
	double x;
	double y;
}point;

int main(){
    point myPoint;
	myPoint.x = 12.2;
	myPoint.y = 13.3;
	printf("X coordinate is %lf, and Y coordinate is %lf\n", myPoint.x, myPoint.y);
	return 0;
}


