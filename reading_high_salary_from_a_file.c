#include<stdio.h>
struct employee{
 	int id;
 	char name[20];
 	float salary;
};



void main(){
	struct employee e[5];
	int i;
	FILE *fptr=fopen("employee.txt","r");
	for(i=0;i<5;i++){
		fscanf(fptr,"%d %s %f\n",&e[i].id,&e[i].name,&e[i].salary);
		if(e[i].salary>5000){
			printf("%d %s %f\n",e[i].id,e[i].name,e[i].salary);
		}
	}
	fclose(fptr);
}
