#include<stdio.h>

void increaseAge(int arr[]){
	int i;
	printf("Increased value at increasing Age function\n");
	for(i=0;i<5;i++){
		arr[i] =arr[i] + 1;
		printf("%d\n",arr[i]);
	}
}

void main(){
	int age[5] ={21,22,12,15,19};
	int i;
	printf("List of age in main function\n");
	for(i=0;i<5;i++){
		printf("%d\n",age[i]);
	}
	increaseAge(age);
	printf("List of age after increasing age function is called \n");
	for(i=0;i<5;i++){
		printf("%d\n",age[i]);
	}
}
