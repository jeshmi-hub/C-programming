#include<stdio.h>
void main(){
	int a = 5;
	int *p;
	p = &a;
	int **q;
	q = &p;
	int ***r;
	r = &q;
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", q);
	printf("%d\n", *q);
	printf("%d\n", **q);
	printf("%d\n", r);
	printf("%d\n", *r);
	printf("%d\n", **r);
	printf("%d\n",***r);
}
