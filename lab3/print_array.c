#include <stdio.h>

int main()
{
    int arr[100] = {0};
    int size = 0;

    printf("Enter array size : ");
    // Validate the input is integer
    if (!scanf("%d", &size))
    {
        printf("Error Integer Number required !!!!\n");
        return 0;
    }

    // Validate Size is in the required range
    if (size < 0 || size > 100)
    {
        printf("Error size range is from 0 to 100 !!!!!");
        return 0;
    }

    // Get the Array elements
    for (int i = 0; i < size; ++i)
    {
        printf("Enter array element No. %d : ", i + 1);
        if (!scanf("%d", &arr[i]))
        {
            printf("Error only integer numbers allowed !!!!\n");
            return 0;
        }
    }

    printf("\nThe array you entered is as follows :\n");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}