//question no.3

/*Write a program to find the sum of elements on the diagonal of a 3*3 matrix.
*/
#include<stdio.h>
void main(){
	int a[3][3];
	printf("Enter elements in a array:");
	int i,j;
	int sum =0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				sum = sum+ a[i][j];
			}
		}
	}
	printf("%d\n",sum);
}
