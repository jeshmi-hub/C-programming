#include<stdio.h>
void change(int *ptr){
	*ptr = *ptr + 10;
}
void main(){
	int p = 5;//if we need to change the value of actual parameters pass by reference comes in handy
	//if we don't need want to make change in actual parameter pass by value comes in handy
	change(&p);
	printf("The value of p is %d",p);
}
//use of pointers lets you access the local variable of main function 
