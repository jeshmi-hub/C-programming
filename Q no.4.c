#include <stdio.h>

void main(){
	char a;
	printf("Please enter a character: ");
	scanf("%c", &a);
	if(a >= 65 && a <= 90){
		a = a+32;
	}
	printf("%c ", a);
}
