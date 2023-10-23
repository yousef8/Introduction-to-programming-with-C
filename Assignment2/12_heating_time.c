#include <stdio.h>

int get_heating_time(double temp);

int main()
{
    double temp = 0;
    printf("Enter Water Heat Temperature : ");
    if (!scanf("%lf", &temp))
    {
        printf("Error, Only numbers are allowed !!!\n");
        return 0;
    }

    printf("%d", get_heating_time(temp));

    return 0;
}

int get_heating_time(double temp)
{
    if (0 <= temp && temp < 30)
    {
        return 7;
    }

    if (30 <= temp && temp < 60)
    {
        return 5;
    }

    if (60 <= temp && temp < 90)
    {
        return 3;
    }

    if (90 <= temp && temp <= 100)
    {
        return 1;
    }

    return 0;
}