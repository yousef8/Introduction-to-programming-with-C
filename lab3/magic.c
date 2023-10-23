#include <stdio.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x, int y);

int main()
{
    int size = 0;

    printf("Enter magic box size : ");

    // Validate Input not to be something other than integer
    if (!scanf("%d", &size))
    {
        printf("Error Not A Number  !!!!\n");
        return 0;
    }

    // Validate Input is an Odd number
    if (0 == size % 2)
    {
        printf("Error Number Must Be Odd !!!!\n");
        return 0;
    }

    // Starting point for the 1 element
    system("cls");
    int x = size / 2, y = 0;

    for (int i = 1; i <= size * size; ++i)
    {
        //  *4 space between cols, *2 space between rows
        gotoxy(5 + (x * 4), 3 + (y * 2));
        printf("%d", i);

        // Calculate Next Movement
        if (0 == i % size)
        {
            ++y;
        }
        else
        {
            --x;
            --y;

            if (y < 0)
            {
                y = size - 1;
            }

            if (x < 0)
            {
                x = size - 1;
            }
        }
        sleep(1);
    }
    return 0;
}

void gotoxy(int x, int y)
{
    COORD coord = {1, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
