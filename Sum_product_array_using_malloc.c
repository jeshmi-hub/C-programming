/*Write a program that reads ‘n’ from the user and allocates memory to hold
n integer numbers. Pass these numbers to a function that returns the sum
and product between them.*/
#include<stdio.h>
#include<stdlib.h>

void main(){
	int n,i;
	printf("Enter the elements in array:");
	scanf("%d",&n);
	int *p;
	p =(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	int sum = 0,product = 1;
	sumandproduct(p,n,&sum,&product);
	printf("Sum of the array:%d\n",sum);
	printf("Product of the array:%d",product);
	free(p);
}

int sumandproduct(int arr[],int len,int *add, int *mul){
	int i;
	for(i=0;i<len;i++){
		*add = *add + arr[i];
		*mul = *mul * arr[i];
	}
	
}

