#include<stdio.h>
#include<stdio.h>
 void can_vote(int arr[]){
 	int i;
 	for(i=0;i<5;i++){
 		if(arr[i]>=18){
 			printf("You can caste a vote:arr[%d]:%d\n",i,arr[i]);
		 }
		 else{
		 	printf("You cannot caste a vote:arr[%d]:%d\n",i,arr[i]);
		 }
	 }
 }
 
 void main(){
 	int num[5];
 	int i;
 	printf("Enter age of five people:");
 	for(i=0;i<5;i++){
 		scanf("%d",&num[i]);
 	}
 	
 	can_vote(num);
 }

