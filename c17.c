#include<stdio.h>
void main(){
	int n,x,y;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++){
		for(y=1;y<=x;y++){
			printf("*");
		}
		printf("\n");
	}
}
