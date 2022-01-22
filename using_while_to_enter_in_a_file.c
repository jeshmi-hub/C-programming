#include<stdio.h>

void main(){
	int age, roll;
	char name[50];
	FILE *fp;
	char ch = 'y';
	fp = fopen("student.txt","a");
	
	while(ch=='y' || ch=='Y'){
		printf("Enter name: \n");
		scanf("%s",&name);
		printf("Enter roll no: \n");
		scanf("%d",&roll);
		printf("Enter age: \n");
		scanf("%d",&age);
		fprintf(fp,"%s %d %d",name,roll,age);
		printf("Do you want to enter any more data? \n");
		scanf(" %c",&ch);
	}
	fclose(fp);
}
