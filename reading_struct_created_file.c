#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
};

void main(){
	struct student x1;
	FILE *fptr=fopen("random.txt","r");
	fscanf(fptr,"%s\n%d\n%f\n",x1.name,&x1.roll,&x1.marks);
	printf("%s %d %f",x1.name,x1.roll,x1.marks);
}
