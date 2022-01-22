#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
};

void main(){
	struct student s1={"Ram",81,78.5};
	FILE *fptr = fopen("random.txt","w");
	fprintf(fptr,"%s\n%d\n%f\n",s1.name,s1.roll,s1.marks);
	fclose(fptr);
}
