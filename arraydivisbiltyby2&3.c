/*Write a program to count and find the sum of all the
numbers in the array which are exactly divisible by 5 and
not divisible by 2 and 3.*/

#include<stdio.h>
#include<conio.h>

void main(){
	int i,num[5],sum=0,count=0;
	printf("Enter 5 elements for an array:");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
		printf("Elements in an array n[%d] is:%d\n",i,num[i]);
	}

		
	for(i=0;i<5;i++){
		if(num[i]%5==0 && !(num[i]%2==0 || num[i]%3==0)){
			count++;
			sum+=num[i];
			printf("Elements in array that is divsible by 5 is n[%d]:%d\n",i,num[i]);
		}
	}
		printf("The  count of numbers exactly divisible by 5 & not divisible by 2 and 3:%d\n",count);
		printf("The sum of numbers divisble by 5 is:%d\n",sum);

}
