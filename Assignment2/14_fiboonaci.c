#include <stdio.h>

int fib(int n);

int main()
{
    int counter = 0;

    printf("How many fiboonaci numbers you want : ");
    if (!scanf("%d", &counter))
    {
        printf("Erro, Only Positive Integers Allowed !!!\n");
        return 0;
    }

    for (int i = 0; i < counter; ++i)
    {
        printf("%d ", fib(i));
    }
    return 0;
}

int fib(int n)
{
    if (0 == n)
    {
        return 0;
    }

    if (1 == n)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}