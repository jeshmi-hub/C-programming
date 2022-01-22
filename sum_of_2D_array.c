#include<stdio.h>

void main(){
	int a[4][4]={
	{1,2,3,4},
	{3,4,5,6},
	{5,6,7,8},
	{8,9,2,1}
	};
	int i,j;
	int sum = 0;
	int d[4];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			sum = sum + a[i][j];
		}
		d[i] = sum;
	}
	
	for(i=0;i<4;i++){
		printf("%d\n",d[i]);
	}
	
}
