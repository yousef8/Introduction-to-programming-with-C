#include <stdio.h>

int main()
{
    int rows = 0;

    printf("Enter pyramide height : ");
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

    // Print Each Row
    for (int row = 1; row <= rows; ++row)
    {
        // Print the Front White Spaces
        for (int space = rows - row; space > 0; --space)
        {
            printf(" ");
        }

        // Print the Stars in each row
        for (int star = 1; star <= (2 * row - 1); ++star)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}