#include<stdio.h>
#include<conio.h>

void main(){
	int i,j,n=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			n++;
			printf("%d",n);
		}
		printf("\n");
	}
}
