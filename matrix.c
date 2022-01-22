#include<stdio.h>
#define MAX 50

void main(){
	int a[MAX][MAX],b[MAX][MAX], product[MAX][MAX];
	int arows,acolumns, brows, bcolumns;
	int i,j,k;
	int sum = 0;
	
	printf("Enter the rows and colums for matrix a: ");
	scanf("%d %d",&arows,&acolumns);
	
	printf("Enter the elements of matrix a:\n");
	for(i=0;i<arows;i++){
		for(j=0;j<acolumns;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the rows and columns for matrix b: ");
	scanf("%d %d",&brows,&bcolumns);
	
	if(brows!= acolumns){
		printf("Sorry!!!the matrix multiplication is not possible. Input the proper size of matrix");
	}
	else{
		printf("Enter the elements of the matrix b:\n");
		for(i=0;i<brows;i++){
			for(j=0;j<bcolumns;j++){
				scanf("%d",&b[i][j]);
			}
		}
	}
	
	printf("\n");
	
	for(i=0;i<arows;i++){
		for(j=0;j<bcolumns;j++){
			for(k=0;k<brows;k++){
				sum += a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum = 0;
		}
	}
	
	printf("Resultant matrix is:\n ");
	for(i=0;i<arows;i++){
		for(j=0;j<bcolumns;j++){
			printf("%d ",product[i][j]);
		}
		printf("\n");
	}
	
}
