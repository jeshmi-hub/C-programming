///Write a program in C to take two numbers from the user and print
//the maximum between two numbers using a pointer.

#include<stdio.h>
#include<conio.h>

void main(){
	int x,y,*xptr,*yptr;
	printf("Enter two different numbers: ");
	scanf("%d %d",&x,&y);
	xptr = &x;
	yptr = &y;
	if(xptr < yptr){
		printf("xptr is greater: %d",x);
	}
	else{
		printf("yptr is greater: %d",y);
	}
	
}
