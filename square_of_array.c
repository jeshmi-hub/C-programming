
//question no.2
/*
Write a program to raise the power of each elements of a matrix of order 2*3 by
2. Display the resultant matrix.

*/


#include<stdio.h>
void main(){
	int a[2][3];
	int i,j;
	printf("Enter elements of array:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			a[i][j]=a[i][j]*a[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
}
