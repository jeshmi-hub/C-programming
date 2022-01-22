#include<stdio.h>
void main(){
	int a[] ={5,16,7,89,45,32,23,47}; 
	int *p = &a[2];
	printf("value is = %d\n",*(--p));
	printf("value is = %d",*p);
}
