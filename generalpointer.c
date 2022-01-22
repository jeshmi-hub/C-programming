#include<stdio.h>

void main(){
	int x = 10;
	float y = 3.2;
	void *p;
	p = &x;
	printf("Integer value is %d\n",*((int*)p));
	p = &y;
	printf("Float value is %f",*((float*)p));
}
