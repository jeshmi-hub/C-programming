#include<stdio.h>
void main(){
	int age, roll;
	char name[50];
	FILE *fp;
	fp = fopen("student.txt","w");
	printf("Enter name: \n");
	scanf("%s",&name);
	printf("Enter roll no: \n");
	scanf("%d",&roll);
	printf("Enter age:");
	scanf("%d",&age);
	fprintf(fp,"%s %d %d",name,roll,age);
	fclose(fp);
}
