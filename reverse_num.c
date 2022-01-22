#include<stdio.h>

void main(){
	int n,sum=0,r;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
while(n>0){
	r = n%10;
	sum=sum*10+r;
	n=n/10;
}
printf("The reverse order of the number is:%d",sum);
}
