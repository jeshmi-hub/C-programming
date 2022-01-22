#include<stdio.h>
#include<stdlib.h>


struct vote{
	char name[20];
	int age;
};

void caste_vote(struct vote v[], int size){
	int i, s=v[0].age;
	for(i=0;i<size;i++){
		if(v[i].age>=18){
			printf("You can vote\n");
		}else{
			printf("You cannot caste vote\n");
		}
	}
}
void main(){
	int i,num;
	
	printf("Enter the size of the array:");
	scanf("%d",&num);
	
	struct vote *p = (struct vote*)malloc(num*sizeof(struct vote));
	for(i=0;i<num;i++){
		fflush(stdin);
		printf("Name:");
		gets(p[i].name);
		printf("Age:");
		scanf("%d",&p[i].age);
	}
	caste_vote(p,num);
}
