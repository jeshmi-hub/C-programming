/*Create a structure named COMPLEX containing real and imaginary as its
members. Write a program that uses the above structure to input two complex
numbers and pass them to function, which returns the sum of entered complex
numbers in the main function.*/

#include<stdio.h>

struct complex{
	int real;
	int img;
};

struct complex add(struct complex a, struct complex b){
	struct complex c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

void main(){
	struct complex s1 = {2,3};
	struct complex s2 = {4,5};
	struct complex s3 = add(s1,s2);
	printf("%d %d",s3.real,s3.img);
}
