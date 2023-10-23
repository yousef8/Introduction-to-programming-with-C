#include <stdio.h>

int max(int num1, int num2);

int main()
{
    printf("Enter 3 numbers (separated by space): ");
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The Largest Number is \"%d\"\n", max(max(num1, num2), num3));
    return 0;
}

int max(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}