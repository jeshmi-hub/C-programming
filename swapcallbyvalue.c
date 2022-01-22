#include<stdio.h>

void swap(int a, int b);

void main(){
	int x, y;
	printf("Enter two different numbers:");
	scanf("%d %d",&x,&y);
	swap(x,y);
	printf("After swapped value: x:%d , y:%d\n",x,y);
}


void swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	printf("Swapped value: x = %d, y =%d\n",a,b);
}
