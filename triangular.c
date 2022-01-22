#include<stdio.h>
void function(int n){
	int i,tn;
	for(i=1;i<=n;i++){
		tn=i*(i+1)/2;
		printf("%d\t",tn);
	}
	
	
}

void main(){
	int number;
	printf("Enter the number :");
	scanf("%d",&number);
	function(number);
	
}
