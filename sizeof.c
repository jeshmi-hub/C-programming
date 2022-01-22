#include<stdio.h>

void main(){
    int i = 40;
	int *p = &i;
	char *c;
	char a = 'B';
	
	printf("i size: %d\n",sizeof(i));
	printf("*p size: %d\n",sizeof(*p));
	printf("p size: %d\n",sizeof(p));
	printf("a size: %d\n",sizeof(a));
	printf("c size:%d\n",sizeof(c));
	printf("*c size:%d\n",sizeof(*c));
	
}
