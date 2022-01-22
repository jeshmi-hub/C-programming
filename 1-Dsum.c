//question no.4


/*4. Write a program that adds individual rows of a 2*3 matrix and store it in a 1D
Array.

*/
#include<stdio.h>
void main(){
	int a[2][3];
	int i,j;
	printf("Enter elements of a array:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int d1[2];
	for(i=0;i<2;i++){
		int sum = 0;
		for(j=0;j<3;j++){
			sum = sum + a[i][j];
		}
		d1[i] = sum;
	}
	for(i=0;i<2;i++){
		printf("a[%d] = %d \n",i,d1[i]);
	}
}
