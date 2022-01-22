#include<stdio.h>

int SumDiff(int a, int b,int *sptr, int *dptr){
	*sptr = a + b;
	*dptr = b - a;
	
}

void main(){
	int c = 34, d = 56, sum,diff;
	SumDiff(c,d,&sum,&diff);
	printf("Sum and difference of two different numbers is= %d \n %d",sum,diff);

}
