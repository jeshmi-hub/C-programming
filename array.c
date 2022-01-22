#include<stdio.h>

void main(){
	int age[]={21,22,12,15,19};
	int i;
	age[2] = 25;
	for(i=0;i<5;i++){
		printf("%d\n",age[i]);
	}
	
}
