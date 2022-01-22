#include<stdio.h>
void main(){
	char original[] = "abc.txt";
	char duplicate[] = "copy.txt";
	FILE *org, *dup;
	int c;
	
	org =fopen(original,"r");
	dup =fopen(duplicate,"w");
	
	if(org == NULL || dup == NULL){
		puts("Cannot copy file");
	}
	while(1){
		c = fgetc(org);
		if(c==EOF){
			break;
		}
		fputc(c,dup);
	}
	fclose(org);
	fclose(dup);
}
