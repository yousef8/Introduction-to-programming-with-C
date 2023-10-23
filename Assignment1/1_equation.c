#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;

    // Get Num 1
    printf("Enter 1st number : ");
    if (!scanf("%d", &num1))
    {
        printf("Error number must be integer !!!!");
        return 0;
    }

    // Get Num 2
    printf("Enter 2nd number : ");
    if (!scanf("%d", &num2))
    {
        printf("Error number must be integer !!!!");
        return 0;
    }

    printf("((%d + %d)* 3) - 10 = %d", num1, num2, ((num1 + num2) * 3) - 10);
    return 0;
}