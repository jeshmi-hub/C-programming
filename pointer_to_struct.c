#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	float marks;
};

void main(){
	struct student s1 ={"Ram",81,78};
	struct student *ptr;
	ptr=&s1;
	
	printf("%s\t",ptr->name);
	
	printf("%d\t",ptr->rollno);
	
	printf("%f\t",ptr->marks);
	
	
}
