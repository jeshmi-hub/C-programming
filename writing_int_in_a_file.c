#include<stdio.h>
void main(){
	FILE *fptr=fopen("test.txt","w");
	int a =5,b=10;
	fprintf(fptr,"%d,%d",a,b);
	fclose(fptr);
}
