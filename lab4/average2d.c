#include <stdio.h>
#define ROWS 4
#define COLS 3

int main()
{
    int arr[ROWS][COLS] = {0};

    // Populate && Print Array
    for (int row = 0, count = 1; row < ROWS; ++row)
    {
        for (int col = 0; col < COLS; ++col)
        {
            arr[row][col] = count++;
            printf("%d\t", arr[row][col]);
        }

        printf("\n");
    }

    // Calculate Average for Each Column
    for (int col = 0; col < COLS; ++col)
    {
        int sum = 0;
        for (int row = 0; row < ROWS; ++row)
        {
            sum += arr[row][col];
        }
        printf("Average for Columen %d = %.2lf\n", col + 1, (double)sum / ROWS);
    }

    return 0;
}