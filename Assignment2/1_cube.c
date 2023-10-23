#include <stdio.h>

int cube(int n);

int main()
{
    int n = 0;
    printf("Enter a number : ");
    if (!scanf("%d", &n))
    {
        printf("Error, Only Integers allowed !!!\n");
        return 0;
    }

    printf("The Cube of %d is \"%d\"\n", n, cube(n));
    return 0;
}

int cube(int n)
{
    return n * n * n;
}