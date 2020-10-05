#include<stdio.h>
	float faren;
	float celsius;
 void calc(){
 	printf("The temperature in farenheit is %f",faren);
 }
void main(){

	printf("enter temperature in farenheit:");
	scanf("%f",&faren);
	calc();
	celsius = faren/1.8;
	printf("THe temperature in celsius is %f",celsius);
}
