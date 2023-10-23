#include <stdio.h>

int main()
{
    printf("Enter a number : ");
    int num;
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Zero is Not Positive Nor Negative\n");
        return 0;
    }

    if (num % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}