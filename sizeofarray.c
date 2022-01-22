
/*Write a program to replace each element in an array with
the integer value 5. You must take input from users in the
main function and save it in an array. You must also take
the size of an array from the user. You must create a
function that takes two parameters: an array and length of
the array. Your function should not return anything and it
should not print anything. You must print before and after
replacing an element in an array in the main function.*/



#include<stdio.h>

void replace_array(int arr[],int length);


void main(){
	int i,num[5];
	printf("Enter five elements in an array:");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	printf("size of array:%d\n",sizeof(num[i]));
	printf("Before calling function:\n");
	printf("After calling function:\n");
}
