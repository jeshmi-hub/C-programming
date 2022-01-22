/*Write a program that reads ‘n’ from the user and allocates memory to hold
n integer numbers. Pass these numbers to a function that returns the
average of these numbers.
Hint: You must make a function that takes two parameters: an array and
other the length of the array.*/

#include<stdio.h>
#include<stdlib.h>
float average(int arr[],int len){
	int i, sum = 0;
	for(i=0;i<len;i++){
		sum = sum + arr[i];
	}
	return sum / len;
}
void main(){
	int num,i;
	float avg;
	printf("Enter elements of a array:");
	scanf("%d",&num);
	int *p = (int *)malloc(num*sizeof(int));
	for(i=0;i<num;i++){
		scanf("%d",&p[i]);
	}
	avg = average(p,num);
	printf("The average of a array is:%f",avg);
	free(p);
}
