#include<stdio.h>
void main(){
	int age,roll;
	char name[50];
	FILE *fp;
	fp = fopen("student.txt","r");
	
	while(fscanf(fp,"%s %d %d",name,&roll,&age)!=EOF){
		printf("From the file: %s %d %d\n",name,roll,age);
	}
	fclose(fp);
}
