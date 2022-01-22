#include<stdio.h>

void swap(int *a, int *b);

void main(){
	int x,y;
	printf("Enter value of two numbers: ");
	scanf("%d %d",&x,&y);
	
	
	swap(&x,&y);
	printf("After swapped value: x=%d and y=%d\n",x,y);
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}
