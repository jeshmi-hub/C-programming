#include<stdio.h>
void main(){
	int var = 10;
	int *ptr = &var;
	void *vptr = ptr;
	
	printf("%p\n",ptr);
	printf("%p\n",&var);
	printf("%d\n",*(int*)vptr);
}
