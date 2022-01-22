#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[20];
	int rollno;
	float marks;
};

void main(){
	struct student s[3];
	int i;
	for(i=0;i<3;i++){
		fflush(stdin);
		gets(s[i].name);
		scanf("%d",&s[i].rollno);
		scanf("%f",&s[i].marks);
	}
	
	for(i=0;i<3;i++){
		printf("%s %d %f\n",s[i].name,s[i].rollno,s[i].marks);
	}
}
