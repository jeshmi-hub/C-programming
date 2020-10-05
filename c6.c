#include<stdio.h>
#include<stdlib.h>
int main(){
	int marks;
	printf("Enter your marks:");
	scanf("%d",&marks);
	
	switch (marks){
		case 60:
			printf("You've acheived second honors");
			break;
		 case 70:
			printf("You've achieved first honors");
			break;
		 case 80:
			printf("You've achieved distinction");
			break;
		 default:
			printf("You're more legit");
	}
	
}
