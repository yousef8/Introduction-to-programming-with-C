#include <stdio.h>
#include <math.h>

int main()
{
    double rad = 0;

    // Get Radius
    printf("Enter Circle Radius : ");
    if (!scanf("%lf", &rad))
    {
        printf("Error only Decimal/Float numbers allowed !!!!");
        return 0;
    }

    // Validate for Positive input
    if (rad < 0)
    {
        printf("Error must be a positive Decimal/Float !!!!");
        return 0;
    }

    // Calculate && Print Area
    printf("Area is %.5lf\n", M_PI * rad * rad);

    // Calculate && Print circumference
    printf("Circumference is %.5lf\n", 2 * M_PI * rad);
    return 0;
}