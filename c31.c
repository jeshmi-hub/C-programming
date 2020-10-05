#include<stdio.h>
int fact(int n){
	int i,f;
	f=1;
	for(i=1;i<=n;i++){
		f = f*i;
	}
	return f;
}

void main(){
	int fa,fa1,fa2,result;
	fa = fact(5);
	fa1 = fact(10);
	fa2 = fact(15);
	result = fa * fa1 *fa2;
	printf("%d",result);
}
