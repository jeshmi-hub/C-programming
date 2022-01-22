#include<stdio.h>
struct student{ // it should be assignes globally so that others can acess it
	char name[20];
	int rollno;
	float marks;
};

void main(){
	struct student s1;
	printf("Enter your name:");
	gets(s1.name);//gets is better to use for string input
	printf("Enter your rollno:");
	scanf("%d",&s1.rollno);
	printf("Enter your marks:");
	scanf("%f",&s1.marks);
	printf("%s %d  %f",s1.name,s1.rollno,s1.marks);
}
