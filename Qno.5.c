#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    ch = getche();
    while (ch != 13)
    {
        if (ch >='A' && ch <='Z')
        {
            ch = ch + 32;
        }
            printf("%c", ch);
            printf("ENter the character again");
            ch= getche();
   }
}
