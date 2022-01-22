#include<stdio.h>
void main(int argc, char*argv[]){
	int c;
	printf("\nProgramming name:%s", argv[0]);
	printf("\n Total number of arguments: %d",argc);
	
	for(c=0;c<argc;c++){
		printf("\n argv[%d]: %s",c,argv[c]);
	}
	getch();
}
