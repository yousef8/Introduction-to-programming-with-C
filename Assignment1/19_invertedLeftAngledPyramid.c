#include <stdio.h>

int main()
{
    int rows = 0;

    printf("Enter pyramid height : ");

    // Validate Only Integers are allowed
    if (!scanf("%d", &rows))
    {
        printf("Error, Only Positive Integers Allowed !!!\n");
        return 0;
    }

    // Validate Positive Integers only allowed
    if (rows < 0)
    {
        printf("Error, Only Positive Integers Allowed !!!\n");
        return 0;
    }

    // Print Each row
    for (int row = rows; row > 0; --row)
    {
        // Print Stars in each row
        for (int star = 1; star <= row; ++star)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}