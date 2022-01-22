#include<stdio.h>
void main(){
	int num[2][3];
		int i,j;
	printf("Enter elements in a array:");

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&num[i][j]);
		}
	}
	int smatrix [2];
	int sum = 0;

	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			sum = sum + num[i][j];
		}
		smatrix[i] = sum;
	}
	
	for(i=0;i<2;i++){
		printf("%d\n",smatrix[i]);
	}
}
