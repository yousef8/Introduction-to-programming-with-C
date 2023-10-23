#include <stdio.h>

int main()
{
    int n = 0;
    printf("!!! Note This program can only calculate factorial of numbers up to 20 Accuratley!!!\n");
    printf("Enter Positive Integer : ");
    if (!scanf("%d", &n))
    {
        printf("Error, Only Positive Integers Allowed !!!\n");
        return 0;
    }

    if (n < 0)
    {
        printf("Error, Only Positive Integers Allowed !!\n");
        return 0;
    }

    if (0 == n || 1 == n)
    {
        printf("%d! = %d\n", n, 1);
        return 0;
    }
    else
    {
        unsigned long long int f = 1;
        for (int i = n; i > 1; --i)
        {
            f *= i;
        }

        printf("%d! = %llu\n", n, f);
    }

    return 0;
}