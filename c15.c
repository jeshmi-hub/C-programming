#include<stdio.h>
void main(){
	int i;
	printf("Enter any number:");
	scanf("%d",&i);
	int j;
	for(j=1;j<i;j++){
		if(j==8){
			break;
		}
		if(j==2){
			continue;
		}
		printf("%d",j);
	}
}


