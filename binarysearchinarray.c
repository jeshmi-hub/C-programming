#include<stdio.h>
#include<conio.h>

void search(int arr[]);

void main(){
	int i;
	int num[] = {20,15,87,71,24,34};
	printf("Before callling function:%d\t\n");
	for(i=0;i<6;i++){
		printf("%d\n",num[i]);
	}
	search(num);
	printf("After calling function: \n");
	for(i=0;i<6;i++){
		printf("%d\n",num[i]);
	}
}

void search(int arr[]){
	int search,i,flag=0;
	printf("Enter the number to search in an array:");
	scanf("%d",&search);
	
	for(i=0;i<6;i++){
		if(search == arr[i]){
			flag = 1;
			printf("The index number is: %d\n",i);
			break;
		}
	}
	if(flag==0){
		printf("Element not found\n");
	}
	
}
