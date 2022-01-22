#include <stdio.h>
#include <stdlib.h>



int isPrime(const int NUM);


int main()
{

    FILE * fPtrIn,
         * fPtrPrime;

    
    int num, success;

    
    fPtrIn   = fopen("numbers.txt", "r");
    fPtrPrime= fopen("prime-numbers.txt", "w");


    if(fPtrIn == NULL|| fPtrPrime == NULL)
    {

        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_FAILURE);
    }


 
    printf("File opened successfully. Reading integers from file. \n\n");

    while (fscanf(fPtrIn, "%d", &num) != -1)
    {
       
        if (isPrime(num))
            fprintf(fPtrPrime, "%d\n", num);
       

    }


    fclose(fPtrIn);
  
    fclose(fPtrPrime);

    printf("Data written to files successfully.");


    return 0;
}



int isPrime(const int NUM)
{
    int i;  

    if (NUM < 0)
        return 0;
      
    for ( i=2; i<=NUM/2; i++ )    
    {    
           
        if (NUM % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;  
}

