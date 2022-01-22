#include<stdio.h>

int sum(int p , int q){//called function
	int s;
	s = p + q;// p and q are formal arguments as it is declared inside function definition
	return s;
}

void main(){ //calling function
	int a = 5, b = 7, c;
	c = sum(a,b);//a,b are actual arguments 
	printf("%d",c);
}
