//Write a program to take three numbers from the user and save it in
//three different variables. You must swap the value of three
//numbers using function. You must use call by references.

#include<stdio.h>
#include<conio.h>



void swap(int *a,int *b, int *c){
	int temp;
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
	
}
void main(){
	int x,y,z;
	printf("Enter three numbers:");
	scanf("%d %d %d",&x,&y,&z);
	swap(&x,&y,&z);
	printf("before swapping the numbers are: x =%d,y = %d,z=%d ",x,y,z);
}
