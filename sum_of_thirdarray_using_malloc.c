/*Write a program that allocates memory space as required by the user for
three arrays. User enters the numbers for two arrays and the program
sums the corresponding array elements and stores them in the third array.*/

#include<stdio.h>
#include<stdlib.h>


void main(){
	int i;
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int *Arr1 = (int *)malloc(n * sizeof(int));
	int *Arr2 = (int *)malloc(n * sizeof(int));
	int *Arr3 = (int *)malloc(n * sizeof(int));
	
	for(i=0;i<n;i++){
		printf("Enter the %d element of the first array:",i+1);   
		scanf("%d",&Arr1[i]); 
	}
	for(i=0;i<n;i++){
		printf("Enter the %d element of the second array:",i+1);
		scanf("%d",&Arr2[i]);
	}
	
	for (i=0;i<n;i++){
		Arr3[i] = Arr1[i] + Arr2[i];
		printf("arr3[%d] element is %d \n",i,Arr3[i]);
	}
	
	
}
