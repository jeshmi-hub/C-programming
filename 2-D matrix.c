#include<stdio.h>
 void main(){
 	int b[2][3];
 	
 	int num[]={2,3,4,5};
 	int a[3][4]={
 		{0,1,2,3},
 		{3,5,6,7},
 		{6,8,9,0}
	};
	
	int d[3];
	int sum;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("a[%d][%d] = %d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
		 
 }
