#include <stdio.h>
void main(){
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0){
		printf("It is divisible by both 3 and 5");
	}
	else if(n%3==0){
		printf("It is divisible by 3 only");
	}
	else if(n%5==0){
		printf("It is divisible by 5 only");
	}
	else{
		printf("It is not divisible by neither 5 nor 3");
	}
}
