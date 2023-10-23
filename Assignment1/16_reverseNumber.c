#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n = 0;
    printf("!!! This program can handle -ve and +ve numbers !!!\n");
    printf("Enter a number : ");
    if (!scanf("%d", &n))
    {
        printf("Error, Only Integer Numbers Allowed !!!\n");
        return 0;
    }

    // Reverse the number
    int nReversed = 0;
    int nDuplicate = abs(n);
    while (nDuplicate > 0)
    {
        nReversed = nReversed * 10 + (nDuplicate % 10);
        nDuplicate /= 10;
    }

    if (n < 0)
    {
        printf("%d Reversed to %d", n, 0 - nReversed);
    }
    else
    {
        printf("%d Reversed to %d", n, nReversed);
    }

    return 0;
}