#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;

    printf("Enter a positive integer number : ");
    if (!scanf("%d", &n))
    {
        printf("Error, Only Positive Integers are Allowed !!!!\n");
        return 0;
    }

    if (n < 0)
    {
        printf("Error, Only Positive Integerse Allowed !!!\n");
        return 0;
    }

    double square = sqrt(n);

    if ((int)square == square)
    {
        printf("Perfect Square\n");
    }
    else
    {
        printf("NOT a Perfect Square\n");
    }

    return 0;
}