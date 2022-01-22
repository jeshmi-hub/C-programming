#include<stdio.h>
void main(){
	int a[5] = {1,2,3,4,5};
	FILE *fptr = fopen("array.txt","w");
	int i;
	for(i=0;i<5;i++){
		fprintf(fptr,"%d ",a[i]);
	}
	fclose(fptr);
}
