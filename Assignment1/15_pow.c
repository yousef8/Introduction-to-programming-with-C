#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, pow = 0;
    printf("Enter a number : ");
    if (!scanf("%d", &n))
    {
        printf("Error, only an integer is allowed !!!\n");
        return 0;
    }

    printf("Enter a power : ");
    if (!scanf("%d", &pow))
    {
        printf("Error, only an integer is allowed !!!\n");
        return 0;
    }

    if (0 == pow)
    {
        printf("%d^%d = %d", n, pow, 1);
    }
    else
    {
        int nPowered = 1;
        for (int i = abs(pow); i > 0; --i)
        {
            nPowered *= n;
        }

        if (pow < 0)
        {
            printf("%d^%d = 1/%d", n, pow, nPowered);
        }
        else
        {
            printf("%d^%d = %d", n, pow, nPowered);
        }
    }

    return 0;
}