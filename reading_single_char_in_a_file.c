#include<stdio.h>

void main(){
	FILE *fptr =fopen("xyz.txt","r");
	char ch;
	ch=fgetc(fptr);
	printf("%c",ch);
}
