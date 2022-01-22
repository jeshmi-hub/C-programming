/*Write a program to read three integers using an array and
find the smallest and largest among them.You must write a
function for finding the largest and smallest integer and the
result must be displayed in the main function itself. You are
not allowed to create global variables.*/

#include<stdio.h>
#include<conio.h>

void large_small(int arr[], int *l, int *s){
	int i;
	for(i=0;i<3;i++){
			*l = arr[i];
		if(*l < arr[i]){
		}if(*s > arr[i]){
			*s = arr[i];
		}
	}
}


void main(){
	int i, num[3], large, small;
	printf("Enter three numbers in am array:");
	for(i=0;i<3;i++){
		scanf("%d",&num[i]);
	}
	large_small(num,&large,&small);
	printf("The largest number is: %d and the smallest number:%d",large,small);
	
	
}
