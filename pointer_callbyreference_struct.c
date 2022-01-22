#include<stdio.h>
struct complex{
	float real;
	float imag;
};

void abc(struct complex *ptr){
	ptr->real=ptr->real+10;
	ptr->imag=ptr->imag+10;
}

void main(){
	struct complex s1={10,15};
	abc(&s1);
	printf("%f %f",s1.real,s1.imag);
}
