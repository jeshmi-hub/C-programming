#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

long long NUM;
pthread_mutex_t mutex;

struct prime{
    int start;
    int finish;
};


void *prime(void *ptr){
    pthread_mutex_lock(&mutex);
    struct prime *limit_ptr =(struct prime*)ptr;
    long long startLimit = limit_ptr->start;
    long long finishlimit = limit_ptr->finish;
    free(ptr);
    long long i;
    if(NUM<0)
    return 0;
    for(i=startLimit;i<=finishlimit;i++){
        for(i=2;i<NUM/2;i++){
            if(NUM%i==0){
                return 0;
            }
        }
    }

    long long *result = malloc(sizeof(*result));
    *result = NUM;
    pthread_exit(result);
    pthread_mutex_unlock(&mutex);
}


void main(){
    int numofthreads;
    printf("Enter the number of threads:");
    scanf("%d",&numofthreads);
    long long *limit=malloc(sizeof(*limit));
    FILE *fptr,*fptrPrime;
    pthread_t ids[numofthreads];
    pthread_mutex_init(&mutex,NULL);

    int sliceList[numofthreads];
    int remainder = *limit%numofthreads;
    int i;
    for(i=0;i<numofthreads;i++){
        sliceList[i] = *limit / numofthreads;
    }

    for(i=0;i<remainder;i++){
        sliceList[i] = sliceList[i]+1;
    }

    int startList[numofthreads];
    int finishList[numofthreads];

    for(i=0;i<numofthreads;i++){
        if(i==0){
            startList[i] =0;
        }else{
            startList[i] = finishList[i-1]+1;
        }
        finishList[i]=startList[i]+sliceList[i]-1;
    }
    struct prime mainStruct[numofthreads];
    for(i=0;i<numofthreads;i++){
        mainStruct[i].start = startList[i];
        mainStruct[i].finish = finishList[i];
    }

    int n;
    for(n=0;i<numofthreads;n++){
        pthread_create(&ids[n],NULL,prime,&mainStruct[n]);
    }
    for(n=0;n<numofthreads;n++){
        pthread_join(ids[n],NULL);
    }

    fptr = fopen("numbers.txt","r");
    fptrPrime = fopen("Prime.txt","w");
    if(fptr==NULL||fptrPrime==NULL){
        printf("Unable to open file.\n");
        printf("check whether the file exists or not.\n");
        exit(EXIT_FAILURE);
    }
    printf("File opened successfully.Reading integers from the file.\n");
    


    while(fscanf(fptr,"%d\n",NUM)!=-1){
        if(prime(limit))
            fprintf(fptrPrime,"%lld\n",NUM);
    }

    pthread_mutex_destroy(&mutex);

    fclose(fptr);
    fclose(fptrPrime);
    free(limit);
}