#include <stdio.h>

int is_multiple(int num1, int num2);

int main()
{
    int num1 = 0, num2 = 0;
    printf("Enter 2 numbers (space separated) : ");
    if (2 != scanf("%d %d", &num1, &num2))
    {
        printf("Error, only integers allowed !!!\n");
        return 0;
    }

    if (is_multiple(num1, num2))
    {
        printf("%d IS MULTIPLE OF %d", num1, num2);
    }
    else
    {
        printf("%d IS NOT MULTIPLE OF %d", num1, num2);
    }

    return 0;
}

int is_multiple(int num1, int num2)
{
    if (num1 % num2 == 0)
    {
        return 1;
    }

    return 0;
}