/*Write a program that asks the user for two inputs: lower limit and upper limit. Now
Write a function named display that prints all the numbers between those limits.*/


#include<stdio.h>

struct number{
	int lower;
	int upper;
};


void show(struct number n){
	int i;
	for(i=n.lower;i<=n.upper;i++){
		printf("%d\t",i);
	}
}




void main(){
	struct number n1;
	printf("Enter lower limit:");
	scanf("%d",&n1.lower);
	printf("Enter upper limit:");
	scanf("%d",&n1.upper);
	show(n1);
	
}
