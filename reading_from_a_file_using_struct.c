#include<stdio.h>

struct student{
	char name[20];
	 int roll;
	 float marks;
};

void main(){
	struct student s[3];
	int i;
	FILE *fp;
	fp = fopen("markss.txt","r");
	for(i=0;i<3;i++){
		while(fscanf(fp,"%s %d %f",s[i].name,&s[i].roll,&s[i].marks)!=EOF){
				printf("%s %d %f",s[i].name,s[i].roll,s[i].marks);
		}
	}
	fclose(fp);
}
