#include<stdio.h>
void main(){
	int n,i;
	int fact = 1;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=5;i++){
		fact = fact * i;
	}
	printf("The Factorial of a number is : %d",fact);
}
