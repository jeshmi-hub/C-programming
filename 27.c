#include <stdio.h>

void main()
{
    int num = 65;
    int i,j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", num);
        }
        printf("\n");
        num = num + 1;
    }
}
