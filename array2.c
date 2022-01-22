#include<stdio.h>

void main(){
	int age[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter the number for index %d: ",i);
		scanf("%d",&age[i]);
	}
	for(i=0;i<5;i++){
		printf("The age at index %d is %d\n",i,age[i]);
	}
}
