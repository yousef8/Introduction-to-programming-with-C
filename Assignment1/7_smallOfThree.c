#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    // Get 1st number
    printf("Enter 1st number : ");
    if (!scanf("%d", &num1))
    {
        printf("Error, Only Integers allowed !!!!\n");
        return 0;
    }

    // Get 2nd number
    printf("Enter 2st number : ");
    if (!scanf("%d", &num2))
    {
        printf("Error, Only Integers allowed !!!!\n");
        return 0;
    }

    // Get 3rd number
    printf("Enter 3st number : ");
    if (!scanf("%d", &num3))
    {
        printf("Error, Only Integers allowed !!!!\n");
        return 0;
    }

    int min_of_2 = num1 * (num1 <= num2) + num2 * (num2 < num1);
    int min_of_3 = min_of_2 * (min_of_2 <= num3) + num3 * (num3 < min_of_2);

    printf("Smallest number of the three is \"%d\"\n", min_of_3);
    return 0;
}