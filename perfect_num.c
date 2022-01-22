/*suppose 6 and the fctor of 6 is 1,2,3,6 but 6 is not counted and if all the 
factor of 6 is added i.e 1+2+3 is equal t0 6 this is a perfect number.
*/

#include<stdio.h>

void main(){
	int n,i,sum=0;
	printf("Enter any number:");
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	
	if(n==sum){
		printf("It is a square number.\n");
	
	}
	else{
		printf("It is not a square number.");
	}
}
