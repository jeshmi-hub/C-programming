#include<stdio.h>
#include<stdlib.h>

void main(){
	int num, i;
	printf("Enter size of the array:");
	scanf("%d",&num);
	
	int *p=(int *)malloc(num*sizeof(int));
	for(i=0;i<num;i++){
		scanf("%d",(p+i));
	}
	
	int sum=0;
	float avg;
	 for(i=0;i<num;i++){
	 	sum = sum + *(p+i);
	 }
	 
	 avg = sum/num;
	 
	 printf("sum:%d\n",sum);
	 printf("avg:%f",avg);
}
