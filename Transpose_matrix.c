#include<stdio.h>
#include<conio.h>

void main(){
	int mat[3][3], trans[3][3],i,j;
	printf("Enter Nine elements in Array: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Elements are:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			trans[i][j] = mat[j][i];
		}
	}
	printf("Transpose of matrix:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d", trans[i][j]);
		}
		printf("\n");
	}
}
