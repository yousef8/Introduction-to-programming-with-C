#include <stdio.h>

int floor_float(double n);

int main()
{
    double num1 = 0, num2 = 0;

    printf("Enter 2 float numbers (space separated) : ");
    if (2 != scanf("%lf %lf", &num1, &num2))
    {
        printf("Error, Only float values required !!!\n");
        return 0;
    }

    printf("floor Sum of the 2 floats is \"%d\"\n", floor_float(num1 + num2));

    return 0;
}

int floor_float(double n)
{
    return n;
}