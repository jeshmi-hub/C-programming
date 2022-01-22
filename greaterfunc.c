#include<stdio.h>

int greatest(int x, int y){
	if (x > y){
		printf("X is greater\n");
		return x;
	}
	else{
		printf("y is greater\n");
		return y;
	}
	
}

void main(){
	int res;
	res = greatest(5,6);
	printf("Greatest num = %d",res);
}
