/*Create a structure named Employee having members name,salary and hours of
work per day. Now, write a program to dynamically create an ‘n’ number of
structures of type Employee. Pass this array of structure to a function that prints
the highest salary of the employee.*/

#include<stdio.h>
#include<stdlib.h>

struct employee{
	char name[20];
	float salary;
	int hours;
};


void abc(struct employee e[],int size){
	int i,large=e[0].salary;
	
	for(i=1;i<size;i++){
		if(e[i].salary>large){
			large = e[i].salary;
		}
	}
     printf("The highest salary is:%d",large);
	}
	
	void main(){
		int n,i;
		printf("Enter the size of the employee info details:");
		scanf("%d",&n);
		struct employee* ptr =(struct employee*)malloc(n*sizeof(struct employee));
		for(i=0;i<n;i++){
			fflush(stdin);
			printf("Name:");
			gets(ptr[i].name);
			printf("Salary:");
			scanf("%f",&ptr[i].salary);
			printf("Work hours:");
			scanf("%d",&ptr[i].hours);
		}
		abc(ptr,n);
	}
	

