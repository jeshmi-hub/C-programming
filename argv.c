#include<stdio.h>
void main(int argc, char *argv[]){
	int counter;
	
	printf("Program name is: %s", argv[0]);
	if(argc==1){
		printf("\n Argument is not passed");
	}else if(argc>=2){
		printf("\n Number of arguments passed: %d", argc);
		printf("\n Arguments passed are:");
		
		for(counter=0;counter<argc;counter++){
			printf("\n argv[%d]: %s", counter, argv[counter]);
		}
	}
	
}
