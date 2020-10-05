#include<stdio.h>
int sum(int a,int b){
	int s;
	s = a + b;
	return s;
}

void main(){
	int x;
    x=sum(3,4);
	printf("%d",x);
}
