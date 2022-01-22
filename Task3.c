#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


pthread_mutex_t mutex;

void *isPrime(void *ptr){
    pthread_mutex_lock(&mutex);
    int *pr = (int*)ptr;
    int p = *pr;
    free(ptr);
    int NUM;

    pthread_t tid = pthread_self();
    int i;
    if(NUM<0){
        return 0;
        for(i=2;i<NUM/2;i++){
            if(NUM%i==0){
                return 0;
            }
        }
    }

    int *result = malloc(sizeof(*result));
    *result = NUM;
    pthread_mutex_unlock(&mutex);
}

void main(){
    int numofthreads;
    printf("Enter the number of threads:");
    scanf("%d",numofthreads);
    FILE *fptr,*fptrPrime;
    void *num;
    int *p = malloc(sizeof(*p));
    pthread_t ids[numofthreads];
    pthread_mutex_init(&mutex,NULL);
    fptr = fopen("numbers.txt","r");
    fptrPrime = fopen("Prime.txt","w");
    if(fptr==NULL||fptrPrime==NULL){
        printf("Unable to open file.\n");
        printf("Check whether the file exists or not.\n");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully.Reading integers from file.\n");


    
    
    int sliceList[numofthreads];
    
    while(fscanf(fptr,"%d",&num)!=-1){
        if(isPrime(p)){
            fprintf(fptrPrime,"%d\n",num);
        }else{
            printf("Other numbers are composite.");
        }
         
    }
    int i;
      for(i=0;i<numofthreads;i++){
        sliceList[i]=*(int*)num/numofthreads;
      }
      int remainder = *(int*)num % numofthreads;
      for(i=0;i<remainder;i++){
          sliceList[i]=sliceList[i]+1;
        }
        for(i=0;i<numofthreads;i++){
            if(i==0){
                p[i]=1;
            }else{
                p[i]=p[i-1]+1;
            }
            p[i]=p[i]+sliceList[i]-1;
        }

    for(i=0;i<numofthreads;i++){
        pthread_create(&ids[i],NULL,isPrime,&p[i]);
    }

    for(i=0;i<numofthreads;i++){
        pthread_join(ids[i],NULL);
    }

    pthread_mutex_destroy(&mutex);
    
    fclose(fptr);
    fclose(fptrPrime);
   
    
}

