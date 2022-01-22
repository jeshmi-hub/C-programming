#include<stdio.h>
#include<stdlib.h>

void main(){
	int num;
	printf("Enter the size of array:");
	scanf("%d",&num);
	
	int *p = (int *)malloc(num*sizeof(int));
	int i;
	for(i=0;i<num;i++){
		scanf("%d",(p+i));
	}
	
	
	for(i=0;i<num;i++){
		if(*p > *(p+i)){
			*p = *(p+i);
		}
	}
	
	printf("The smallest number in the array is:%d",*p);
	
	free(p);
}
