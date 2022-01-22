//Palindrome number
#include<stdio.h>
void main(){
	int n,r,sum=0,temp;
	printf("Enter any number:");
	scanf("%d",&n);
	temp = n;
	while(n>0){
		r = n%10;
		sum = sum * 10 + r;
		n = n/10;
	}
	n = temp;
	
	if(n==sum){
		printf("It is a plaindrome number.");
	}
	else{
		printf("It is not a palindrome number.");
	}
}
