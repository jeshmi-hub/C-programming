#include<stdio.h>
void main(){
	FILE *fptr=fopen("bde.txt","r");
	int a,count=0;
	while(!feof(fptr)){
		fscanf(fptr,"%d",&a);
		count++;
		printf("%d\t",a);
	}
	printf("\n The number of data is %d",count);
}
