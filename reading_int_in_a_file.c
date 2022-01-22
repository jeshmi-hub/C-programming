#include<stdio.h>
void main(){
	FILE *fptr =fopen("test.txt","r");
	int a,b;
	fscanf(fptr,"%d,%d",&a,&b);
	printf("%d,%d",a,b);
	fclose(fptr);
}
