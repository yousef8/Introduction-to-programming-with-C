#include <stdio.h>

void swapV3(int *x, int *y);

int main()
{
    int x = 0, y = 0;
    printf("Enter 2 numbers (space separated) : ");
    scanf("%d %d", &x, &y);
    swapV3(&x, &y);
    printf("numbers swapped v3 : %d %d\n", x, y);
}

void swapV3(int *x, int *y)
{
    if (!*y)
    {
        *y = *x;
        *x = 0;
    }
    else if (!*x)
    {
        *x = *y;
        *y = 0;
    }
    else
    {
        *x = *x * *y;
        *y = *x / *y;
        *x = *x / *y;
    }
}