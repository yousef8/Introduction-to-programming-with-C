#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int x = 0, y = 0;
    printf("Enter 2 numbers (space separated) : ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("numbers swapped : %d %d\n", x, y);
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}