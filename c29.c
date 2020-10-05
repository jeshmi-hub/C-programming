#include<stdio.h>
 float area(float r){
 	float ar;
 	ar = 3.14 * r * r;
 	return ar;
 }
 
 void main(){
 	float a,b;
 	a = area(5.0);
 	b = area(10.0);
 	printf("The area of a circle is : %f\n",a);
 	printf("The are of second circle is : %f",b);
 }
 
 
