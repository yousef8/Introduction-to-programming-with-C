#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter a Positive Integer : ");
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
        printf("Not a Prime Number\n");
        return 0;
    }
    else
    {
        int i = n - 1;
        while (i > 1)
        {
            if (n % i == 0)
            {
                printf("Not a Prime Number\n");
                return 0;
            }
            --i;
        }

        printf("Prime Number\n");

        return 0;
    }
}