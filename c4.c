#include<stdio.h>
int main(){
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	if(a>=0 && b<=10){
		printf("The numbers are between 1 and 10");
	}
	else if(a>=11 && b<=20){
		printf("The number is between 11 and 20");
	}
	else if(a>=21 && b<=30){
		printf("The number is between 21 and 30");
	}
	else{
		printf("The number is greater than 30");
	}
}
