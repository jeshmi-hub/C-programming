#include<stdio.h>

void main(){
	FILE *fptr=fopen("xyz.txt","w");
	char ch = 'A';
	fputc(ch,fptr);
	fclose(fptr);
	
}
