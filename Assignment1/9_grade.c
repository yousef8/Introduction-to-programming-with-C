#include <stdio.h>

int main()
{
    double grade = 0;
    printf("Enter student grade : ");
    if (!scanf("%lf", &grade))
    {
        printf("Error, Only Positive numbers Allowed !!!!");
        return 0;
    }

    if (50 > grade && 0 <= grade)
    {
        printf("Fail\n");
    }
    else if (50 <= grade && 65 > grade)
    {
        printf("Pass\n");
    }
    else if (65 <= grade && 75 > grade)
    {
        printf("Good\n");
    }
    else if (75 <= grade && 85 > grade)
    {
        printf("Very Good\n");
    }
    else if (85 <= grade && 100 >= grade)
    {
        printf("Excellent\n");
    }
    else
    {
        printf("Grade should range from 0 to 100 !!!!\n");
    }

    return 0;
}