//Write a program to read three integers using an array and find the
//smallest and largest among them.You must write a function for
//finding the largest and smallest integer and the result must be
//displayed in the main function itself. You are not allowed to create
//global variables.




#include<stdio.h>
#include<conio.h>

void small_large(int arr[], int *s,int *l){
	int i;
	*l = arr[0];
	*s = arr[0];
	for(i=0;i<3;i++){
		if(*l < arr[i]){
			*l = arr[i];
		}
		if(*s > arr[i]){
			*s = arr[i];
		}
	}
}

void main(){
	int i,num[3],large,small;
	printf("Enter any number in an array:");
	for(i=0;i<3;i++){
		scanf("%d",&num[i]);
	}
	small_large(num, &small, &large);
	printf("The largest number is %d and the smallest number is %d",large,small);
}


