#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch = 0;

    printf("Enter a Character : ");
    ch = getche();
    printf("\n");

    if (-32 == ch)
    {
        printf("Type : Extended\n");
        ch = getche();
    }
    else
    {
        printf("Type : Normal\n");
    }

    printf("ASCII = %d", ch);
    return 0;
}