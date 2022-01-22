#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
};


void main(){
	struct student  s[3]={"Ram", 61, 90.34, "Hari", 67, 89.8, "Shyam",34, 56.45};
	
	
	int i;
	FILE *fp;
	fp = fopen("markss.txt","w");
	for(i=0;i<3;i++){
		fprintf(fp,"%s %d %f",s[i].name,s[i].roll,s[i].marks);
	}
	fclose(fp);
}
	

