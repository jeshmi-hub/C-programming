#include<stdio.h>
struct complex{
	float real;
	float imag;
};

struct complex abc(struct complex c1)
{
	struct complex c2;
	c2.real = c1.real+10;
	c2.imag = c1.imag+10;
	return c2;
}

void main(){
	struct complex s1={10,15};
	struct complex s2=abc(s1);
	printf("%f %f",s2.real,s2.imag);
	
}
