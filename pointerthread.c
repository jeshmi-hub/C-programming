#include<stdio.h>
#include<pthread.h>
char retval[]="Hello Teachers!";
void *hello_std(void* arg){
	pthread_exit(retval);
}

void main(){
	void *printretval;
	pthread_t th1;
	pthread_create(&th1,NULL, hello_std, NULL);
	pthread_join(th1,&printretval);
	printf("printretval=%s\n",printretval);
}
