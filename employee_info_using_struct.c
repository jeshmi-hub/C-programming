/*2-Write a structure to store the names, salary and hours of work per day of 5
employees in a company. Write a program to increase the salary depending on
the number of hours of work per day as follows and then print the name of all the
employees along with their final salaries.*/
#include<stdio.h>
#include<stdlib.h>

struct company{
	char name[20];
	float salary;
	float hours;
};

void main(){
	struct company employee[5];
	int i;
	printf("Enter the names, salary, and the work hours of the employee: \n");
	
	for(i=0;i<5;i++){
		fflush(stdin);
		printf("\n Name:");//can use gets i.e gets(employee[i].name);
		scanf("%s",&employee[i].name);
		printf("\n Salary:");
		scanf("%f",&employee[i].salary);
		printf("\n Work hours:");
		scanf("%f",&employee[i].hours);
	}
	for(i=0;i<5;i++){
		if(employee[i].hours==8 || employee[i].hours<8){
			employee[i].salary +=50;
		}else if(employee[i].hours==10 || employee[i].hours<12){
			employee[i].salary +=100;
		}else if(employee[i].hours>=12){
			employee[i].salary +=150;
		}
		printf("\n Name :%s \n Salary : %f \n Hours : %.2f",employee[i].name,employee[i].salary,employee[i].hours);
	}
}

