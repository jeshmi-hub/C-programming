#include<stdio.h>

struct student{
	char name[20];
	int rollno;
	float marks;
};

void main(){
	struct student s1={"Jenny",26,85.9};
	printf("%s\t",s1.name);
	printf("%d\t",s1.rollno);
	printf("%f\t",s1.marks);
}
