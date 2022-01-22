//Write a program to count and find the sum of all the numbers in
//the array which are exactly divisible by 7 and not divisible by 2
//and 3.

#include<stdio.h>
#include<conio.h>

void main(){
	int i, num[5], count = 0, sum = 0;
	printf("Enter any five numbers:");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<5;i++){
		if(num[i]%7==0 && !(num[i]%2==0 || num[i]%3==0)){
			count++;
			sum+=num[i];
		}
	}
	printf("The count is %d and the sum is %d",count,sum);
}
