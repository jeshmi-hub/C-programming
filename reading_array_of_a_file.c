#include<stdio.h>
void main(){
	FILE *fptr;
	fptr=fopen("array.txt","r");
	int i;
	int arr[5];
	for(i=0;i<5;i++){
		fscanf(fptr,"%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
	
}
