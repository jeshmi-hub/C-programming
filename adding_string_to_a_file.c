#include<stdio.h>
void main(){
	FILE *fptr = fopen("abc.txt","a");
	char ch3[20] =" Kathmandu";
	fputs(ch3,fptr);
	fclose(fptr);
}
