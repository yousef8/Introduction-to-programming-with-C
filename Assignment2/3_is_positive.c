#include <stdio.h>

int is_positive(double n);

int main()
{
    double n = 0;
    printf("Enter a number : ");
    if (!scanf("%lf", &n))
    {
        printf("Error, Only numbers allowed !!!\n");
        return 0;
    }

    if (is_positive(n))
    {
        printf("Positive\n");
    }
    else
    {
        printf("Negative\n");
    }

    return 0;
}

int is_positive(double n)
{
    if (n >= 0)
    {
        return 1;
    }

    return 0;
}