#include<stdio.h>
#include<stdlib.h>


int *declare_int(int val){
	int *var = malloc(sizeof(int));
	*var = val;
	return var;
}

void main(){
	int *ptr = NULL;
	ptr = declare_int(10);
	printf("%d\n",*ptr);
	free(ptr); 
}

