#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    printf("Enter a number : ");
    if (!scanf("%d", &n))
    {
        printf("Error, Only Integers are Allowed !!!\n");
        return 0;
    }

    // Count digits
    int count = 0;
    int nDuplicate = n;
    while (abs(nDuplicate) > 0)
    {
        ++count;
        nDuplicate /= 10;
    }

    printf("\"%d\" consists of \"%d\" Decimals", n, count);

    return 0;
}