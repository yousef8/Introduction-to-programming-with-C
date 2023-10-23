#include <stdio.h>
#include <string.h>

int count_holes(char n[100]);

int main()
{
    char n[100] = {'a'};
    printf("Enter a number : ");
    scanf("%s", n);

    printf("Number of Holes = %d", count_holes(n));

    return 0;
}

int count_holes(char n[100])
{
    // 0  1  2  3  4  5  6  7  8  9
    int number_to_holes[10] = {1, 0, 0, 0, 1, 0, 1, 0, 2, 1};
    int holes_count = 0;

    for (int i = 0; i < 100; ++i)
    {
        if (48 <= n[i] && n[i] <= 57)
        {
            holes_count += number_to_holes[n[i] - 48];
        }
    }

    return holes_count;
}