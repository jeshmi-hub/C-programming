#include <stdio.h>
#include <stdlib.h>

void Sum(int a, int b, int c){
	int sum = a+b+c;
	printf("The sum of three different numbers is %d\n",sum);
}

int main(){
	Sum(60,70,80);
	Sum(678,6767,686);
	Sum(343,5656,6565);
	Sum(4545,67668,64564);
}
