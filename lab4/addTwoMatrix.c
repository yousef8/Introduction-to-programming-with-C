#include <stdio.h>

#define ROWS 3
#define COLS 3
int main()
{
    int population_counter = 1;
    int arr1[ROWS][COLS] = {0};
    int arr2[ROWS][COLS] = {0};
    int arr3[ROWS][COLS] = {0};

    // Populate and print arr1
    for (int row = 0; row < ROWS; ++row)
    {
        for (int col = 0; col < COLS; ++col)
        {
            arr1[row][col] = population_counter++;
            printf("%d\t", arr1[row][col]);
        }
        printf("\n");
    }

    printf("\n+\n\n");

    // Populate and print arr2
    for (int row = 0; row < ROWS; ++row)
    {
        for (int col = 0; col < COLS; ++col)
        {
            arr2[row][col] = population_counter++;
            printf("%d\t", arr2[row][col]);
        }
        printf("\n");
    }

    printf("\n=\n\n");

    // ADD 2 matrixes and Print result
    for (int row = 0; row < ROWS; ++row)
    {
        for (int col = 0; col < COLS; ++col)
        {
            arr3[row][col] = arr1[row][col] + arr2[row][col];
            printf("%d\t", arr3[row][col]);
        }
        printf("\n");
    }

    return 0;
}