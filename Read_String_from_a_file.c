#include<stdio.h>
void main(){
	FILE *fptr = fopen("abc.txt","r");
	char ch[50];
	fgets(ch,20,fptr);
	printf("%s",ch);
}
