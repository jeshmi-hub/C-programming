#include<stdio.h>
#include<stdlib.h>
void main(){
	int i, n;
	printf("Enter the elements :\n");
	scanf("%d",&n);
	
	int *p = malloc(n * sizeof(int));
	printf("Enter intgers:\n");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	printf("Entered numbers are:\n");
	for(i=0;i<n;i++){
		printf("%d\n",*(p+i));
	}
}
