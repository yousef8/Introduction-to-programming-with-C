#include <stdio.h>

int is_odd(int n);
int main()
{

    int n = 0;
    printf("Enter a number : ");
    if (!scanf("%d", &n))
    {
        printf("Error, Only numbers allowed !!!\n");
        return 0;
    }

    printf("%d\n", is_odd(n));

    return 0;
}

int is_odd(int n)
{
    if (n % 2 != 0)
    {
        return 1;
    }
    return 0;
}