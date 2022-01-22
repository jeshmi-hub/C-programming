#include<stdio.h>

/*Write a program in C to take three numbers from the user
and print the sum, multiplication, quotient, subtraction and
minimum between three numbers using a pointer.*/



void main(){
	int first, second, third, *p, *q, *r, sum, diff, multi,min;
	float quotient, div;
	printf("Enter three numbers :");
	scanf("%d %d %d",&first,&second,&third);
	p = &first;
	q = &second;
	r = &third;
	sum = *p + *q + *r;
	diff = *p - *q - *r;
	multi = *p * *q * *r;
	quotient = *p / *q ;
	div = quotient / *r;
	printf("Sum of three different numbers: %d\n",sum);
	printf("Difference of three different numbers: %d\n",diff);
	printf("Product of three different numbers:%d\n",multi);
	printf("Quotient of three diffrent numbers:%f\n",quotient);
	printf("Quotient of three different numbers: %f\n",div);
	if(*p < *q && *p < *r){
		printf("First number is minimun:%d\n",*p);
	}else if(*q < *p && *q < *r){
		printf("Second number is minimum:%d\n",*q);
	}else{
		printf("Third number is minimum:%d\n",*r);
	}
}
