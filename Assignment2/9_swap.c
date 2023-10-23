#include <stdio.h>

void swap(int num1, int num2);

int main()
{
    int num1 = 0, num2 = 0;
    printf("Enter 2 numbers (space separated) : ");
    if (2 != scanf("%d %d", &num1, &num2))
    {
        printf("Error, Only numbers allowed !!!\n");
        return 0;
    }

    swap(num1, num2);

    return 0;
}

void swap(int num1, int num2)
{
    int temp = num2;
    num2 = num1;
    num1 = temp;

    printf("After swapping : %d %d", num1, num2);
    return;
}