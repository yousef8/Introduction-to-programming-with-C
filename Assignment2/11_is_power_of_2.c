#include <stdio.h>

int isPowerOf2(int n);

int main()
{
    int n = 0;
    printf("Enter a number : ");
    if (!scanf("%d", &n))
    {
        printf("Error, Only integers allowed !!!\n");
        return 0;
    }
    if (n < 0)
    {
        printf("Error, only positive integers allowed !!!\n");
        return 0;
    }

    if (isPowerOf2(n))
    {
        printf("Power of 2\n");
    }
    else
    {
        printf("Not a Power of 2\n");
    }

    return 0;
}

int isPowerOf2(int n)
{
    if (0 == n)
    {
        return 0;
    }

    for (int i = n; i != 1; i /= 2)
    {
        if (i % 2 != 0)
        {
            return 0;
        }
    }

    return 1;
}

void test()
{
    int start, end;
    printf("enter : ");
    scanf("%d %d", &start, &end);

    for (; start <= end; ++start)
    {
        if (isPowerOf2(start))
            printf("%d ", start);
    }
}