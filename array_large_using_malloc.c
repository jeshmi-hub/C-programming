/*Write a program that allocates n integers of an array dynamically and find
the largest element in the array.*/

#include<stdio.h>
#include<stdlib.h>
void main(){
	int num;
	printf("Enter elemets of a array:");
	scanf("%d", &num);
	
	int *p = (int *)malloc(num*sizeof(int));
	int i;
	for(i=0;i<num;i++){
		scanf("\n%d",(p+i));
	}

	for(i=0;i<num;i++){
		if(*p < *(p+i)){
			*p = *(p+i);
		}
			
	}
	printf("largest number in the array:%d",*p);
	
	
		
		free(p);
}
