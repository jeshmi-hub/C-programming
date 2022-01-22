#include<stdio.h>

void main(){
	int a[4][4]={
	{1,2,3,4},
	{4,5,6,7},
	{7,8,9,0},
	{2,3,4,5}
	};
	
	int i,j;
	//displaying the number in the matrix
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("a[%d][%d]=%d\t\n",i,j,a[i][j]);
		}
	}
	printf("**************************************\n");
	int d[4];//no. of rows so that you can calculate the sum of the row
    
    
    //this loop gives the sum of each row of the matrix
	for(i=0;i<4;i++){
			int sum=0;
		for(j=0;j<4;j++){
			sum = sum + a[i][j];
		}
		d[i]=sum;//storing the value of sum in d
	}
	for(i=0;i<4;i++){//prints the sum each row
		printf("a[%d]=%d\t",i,d[i]);
	}
}
