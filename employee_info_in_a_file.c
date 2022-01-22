/*Create a structure named Employee which has members id, name
and salary. Write a program to read the record of 5 employees and
store all the records in employee.txt file. Read the content of the file
whose salary is greater than 5000. Create two files: one for writing
information and another for reading information.*/

#include<stdio.h>
 struct employee{
 	int id;
 	char name[20];
 	float salary;
};

void main(){
struct employee e[5];
int i;
FILE *fptr=fopen("employee.txt","w");
for(i=0;i<5;i++){
	printf("Enter id:");
	scanf("%d",&e[i].id);
	printf("Enter name:");
	scanf("%s",&e[i].name);
	printf("Enter salary:");
	scanf("%f",&e[i].salary);
	fprintf(fptr,"%d %s %f\n",e[i].id,e[i].name,e[i].salary);
}

fclose(fptr);
}
