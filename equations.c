#include<stdio.h>
#include<math.h>

double equations(double a, double b, double c, double d, double e, double f){
	int x,y;
	x = (c * e- b * f) / (a * e - b * d);
	y = (a * f - c * d) / (a * e - b *d);
	printf("x = %1d\n",x);
	printf("y = %1d",y);
}

void main(){
	equations(3,4,5,6,7,8);
}
