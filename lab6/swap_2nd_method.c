#include <stdio.h>

void swapV2(int *x, int *y);

int main()
{
    int x = 0, y = 0;
    printf("Enter 2 numbers (space separated) : ");
    scanf("%d %d", &x, &y);
    swapV2(&x, &y);
    printf("numbers swapped v2 : %d %d\n", x, y);
}

void swapV2(int *x, int *y)
{
    *x = *y + *x;
    *y = *x - *y;
    *x = *x - *y;
}