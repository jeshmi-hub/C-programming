#include<stdio.h>
void main(){
	FILE *fptr = fopen("abc.txt","w");
	char ch[20] = "My name is Ram";
	fputs(ch,fptr);
	fclose(fptr);
}
