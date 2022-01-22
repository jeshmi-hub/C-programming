#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp1 = fopen("PrimeData1.txt","r");
    FILE *fp2 = fopen("PrimeData2.txt","r");
    FILE *fp3 = fopen("PrimeData3.txt","r");

    FILE *fp4 = fopen("numbers.txt","w");
    char c;

    if(fp1==NULL||fp2==NULL||fp3==NULL||fp4==NULL){
        puts("couldn't open file");
    }
    while((c=fgetc(fp1))!=EOF){
        fputc(c,fp4);
    }
     while((c=fgetc(fp2))!=EOF){
        fputc(c,fp4);
    }
     while((c=fgetc(fp3))!=EOF){
        fputc(c,fp4);
    }
    printf("All files merged successfully to numbers.txt\n");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);

}