#include <stdio.h>

int main()
{
    int rows = 0;

    printf("Enter pyramid height : ");
    // Vaildate only Integers allowed
    if (!scanf("%d", &rows))
    {
        printf("Error, Only Positive Integer required !!!\n");
        return 0;
    }

    // Validate only Positive Integers allowed
    if (rows < 0)
    {
        printf("Error, Only Positive Integer required !!!\n");
        return 0;
    }

    // Print Row
    for (int row = 1; row <= rows; ++row)
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