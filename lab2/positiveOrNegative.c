#include <stdio.h>

int main()
{
    printf("Enter a number : ");

    int num;
    scanf("%d", &num);

    printf("Number \"%d\" is ", num);

    if (num < 0)
        printf("Negative\n");
    else if (num > 0)
        printf("Positive\n");
    else
        printf("Zero\n");

    return 0;
}