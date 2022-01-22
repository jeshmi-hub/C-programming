#include<stdio.h>
void main(){
	int a = 5;
	int *ptr;
	ptr = &a;
	printf("The value in ptr is %d\n",ptr);
	ptr = ptr + 1; //pointer arithmetic
	printf("The value in ptr is %d\n",ptr);
	ptr = ptr - 2;
	printf("The value in ptr is %d\n",ptr);
	char ch = 'a';
	char *cptr;
	cptr = &ch;
	printf("The value of cptr is %d\n",cptr);
	cptr = cptr + 1;
	printf("The value of cptr is %d",cptr);
}
