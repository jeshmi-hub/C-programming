#include<stdio.h>
void main(){
	int arr[5] ={1,2,7,8,10};
	FILE *fptr =fopen("bde.txt","w");
    int i;
    for(i=0;i<5;i++){
    	fprintf(fptr,"%d ",arr[i]);
	}
	fclose(fptr);
	
}
