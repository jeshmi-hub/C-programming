//question no.1
/*Write a program to input a 1D Array of size 5 and find the largest element in the
array using pointer notation only.*/
#include<stdio.h>
void main(){
	int num[5];
	int large = *num;
	int i;
	printf("Enter elements in a array:");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++){
	 large = *num;
		if(large < num+i){
			large = *(num+i);
			}
		}
		printf("The largest number in the array is: %d",large);
}
