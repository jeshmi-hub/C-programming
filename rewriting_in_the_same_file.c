#include<stdio.h>
void main(){
	FILE *fptr;
	fptr = fopen("abc.txt","w");
	char ch1[20]="Herald College";
	fputs(ch1,fptr);
	fclose(fptr);
}
