#include<stdio.h>
#include<conio.h>
void main(){
	int count=0, i, salary[100];
	//reading salary of 100 employees
	for(i=0;i<6;i++){
		printf("Enter your salary:");
		scanf("%d",&salary[i]);
	}
	//counting number of employees getting salaries between 10000 to 1500
	for(i=0;i<6;i++){
		if(salary[i]>10000 && salary[i]<15000){
			count++;		
		}
	}
	printf("Total number of employee getting salaries between 1000 to 15000: %d",count);
	getch();
}
