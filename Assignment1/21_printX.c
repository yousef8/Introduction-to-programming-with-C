#include <stdio.h>

int main()
{
    int rows;
    printf("Enter Height of X : ");
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

    // Upper part
    for (int row = 1; row <= rows; ++row)
    {
        // External spacing
        for (int i = 0; i < row - 1; ++i)
        {
            printf(" ");
        }

        printf("*");

        // internal spacing
        int spaces = (2 * (rows - row) - 1) * (row != rows); // Zero if wer are in the Middle line of X
        for (int i = 0; i < spaces; ++i)
        {
            printf(" ");
        }

        // Last Star
        // if the middle row -last row in upper pyramid- then don't print second star
        if (!(rows == row))
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower Part
    for (int row = rows - 1; row > 0; --row)
    {
        // External spacing
        for (int i = 0; i < row - 1; ++i)
        {
            printf(" ");
        }

        printf("*");

        // internal spacing
        int spaces = 2 * (rows - row) - 1;
        for (int i = 0; i < spaces; ++i)
        {
            printf(" ");
        }

        printf("*");

        printf("\n");
    }

    return 0;
}