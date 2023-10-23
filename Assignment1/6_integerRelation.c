#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;

    printf("Enter 1st number : ");
    if (!scanf("%d", &num1))
    {
        printf("Error, Only Integers allowed !!!!");
        return 0;
    }

    printf("Enter 2st number : ");
    if (!scanf("%d", &num2))
    {
        printf("Error, Only Integers allowed !!!!");
        return 0;
    }

    if (num1 == num2)
    {
        printf("Num1 EQUAL Num2\n");
        printf("%d   EQUAL   %d", num1, num2);
    }
    else if (num1 > num2)
    {
        printf("Num1 BIGGER THAn Num2\n");
        printf("%d   BIGGER THAN   %d", num1, num2);
    }
    else
    {
        printf("Num2 BiGGER THAN Num1\n");
        printf("%d   BIGGER THAN   %d", num2, num1);
    }

    return 0;
}