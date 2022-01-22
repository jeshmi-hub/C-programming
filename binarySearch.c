// Write a program to initialize an integer array with values
//{10,5,7,91,54,24}. Pass this array to a function. If element is
//found, print out its index number and if element is not found then
//display the message “Element Not found” in the function.

#include<stdio.h>
#include<conio.h>

void search(int arr[]);


void main(){
	int i;
	int num[] ={10,5,7,91,54,24};
	printf("Before callling function:%d\t\n");
	for(i=0;i<6;i++){
		printf("%d",num[i]);
	}
	search(num);
	printf("After calling function: \n");
	for(i=0;i<6;i++){
		printf("%d",num[i]);
	}
}

void search(int arr[]){
	int search,i,flag=0;
	printf("Enter the number to search in an array:");
	scanf("%d",&search);
	
	for(i=0;i<6;i++){
		if(search == arr[i]){
			flag = 1;
			printf("The index number is: %d",i);
			break;
		}
	}
	if(flag==0){
		printf("Element not found");
	}
	arr[0] = 50;
}
