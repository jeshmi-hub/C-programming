/*Write a program in C to take two numbers from the user
and print the minimum between two numbers using a
pointer*/


#include<stdio.h>


void main(){
int a,b,*aptr,*bptr;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
aptr = &a;
bptr = &b;
if(aptr > bptr){
	printf("a is minimum:%d",*aptr);
}else{
	printf("b is minimum:%d",*bptr);
}
}
