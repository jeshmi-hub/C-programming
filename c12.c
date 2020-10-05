#include<stdio.h>

void main(){
	int j1;
	printf("Enter your birth time:");
	scanf("%d",&j1);
	
	if(j1>=10){
		printf("You are elder");
	}
	else if(j1<10){
		printf("You are younger");
	}
	else{
		printf("You guys are twins");
	}
}
