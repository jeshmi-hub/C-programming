#include<stdio.h>
#include<conio.h>

void main(){
	int num[5], i, sum=0, count=0,*p;
	p = num;
	printf("Enter numbers in an array:");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++){
		if(num[i]%7==0 && !(num[i]%2==0 || num[i]%3==0)){
			count++;
			sum+=num[i];
			printf("Elements in array is num[%d]:%d\n",i,num[i]);
		}
	}
	printf("The count of numbers divisible by 7:%d\n",count);
	printf("The sum of numbers divisible by 7 and not 2 or 3:%d\n",sum);
	for(i=0;i<5;i++){
		printf("Address of n[%d]= %p\n",i,&num[i]);
	}
	printf("Value of first element in array:%d",num[0]);
}
