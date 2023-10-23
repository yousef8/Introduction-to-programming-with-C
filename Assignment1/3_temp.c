#include <stdio.h>

int main()
{
    // Get Degree in Celsius
    double c = 0;
    printf("Enter temperature degree in Celsius : ");
    if (!scanf("%lf", &c))
    {
        printf("Error must be a decimal/float number!!!\n");
        return 0;
    }

    printf("Degree in Fahrenheit is %.2lf°F", c * ((double)9 / 5) + 32);
    return 0;
}