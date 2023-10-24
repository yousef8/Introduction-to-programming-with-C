#ifndef CONSOLE_H_INCLUDED
#define CONSOLE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>

void getCursorPosition(int *x, int *y)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    if (GetConsoleScreenBufferInfo(consoleHandle, &csbi))
    {
        *x = csbi.dwCursorPosition.X;
        *y = csbi.dwCursorPosition.Y;
    }
}

void gotoxy(int x, int y)
{
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int getConsoleWindowWidth()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    if (GetConsoleScreenBufferInfo(consoleHandle, &csbi))
    {
        return csbi.srWindow.Right - csbi.srWindow.Left + 1;
    }

    return -1; // Error occurred
}

#endif // CONSOLE_H_INCLUDED
