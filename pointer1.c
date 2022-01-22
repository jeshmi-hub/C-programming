#include<stdio.h>
void main(){
	float x = 5.75;
	float *fptr;//pointer declaration
	fptr = &x;//pointer initialise
	printf("%d\n",&x);
	printf("%d\n",&fptr);
	printf("%f\n",x);
	printf("%f",*fptr);//derefreshing
}
