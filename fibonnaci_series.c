
//fibonanci series
#include<stdio.h>

void main(){
	int n, a=0,b=1,c;
	printf("Enter limit:");
	scanf("%d",&n);
	int i;
	for(i=0;i<=n;i++){
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
