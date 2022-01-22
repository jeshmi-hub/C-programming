#include<stdio.h>
#include<conio.h>


void main(){
	int num[5],i,sum=0,count=0;
	printf("Enter 5 elements in the array:");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
		printf("Numbers is num[%d]:%d\n",i,num[i]);
	}
	
	for(i=0;i<5;i++){
		if(num[i]%9==0 && !(num[i]%2==0 || num[i]%4==0)){
			count++;
			sum+=num[i];
			printf("The numbers divisble by 9 is num[%d]:%d\n",i,num[i]);
		}
	}
	printf("Count:%d\n",count);
	printf("Sum of numbers divisible by 9 is:%d",sum);
}
