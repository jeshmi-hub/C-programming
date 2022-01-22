#include<stdio.h>
void main(){
	int a = 5;
	int *ptr;
	ptr = &a;
	printf("%d\n",&a);
	printf("%d\n",ptr);
	printf("%d",*ptr);
}
