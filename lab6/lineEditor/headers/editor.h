#ifndef EDITOR_H_INCLUDED
#define EDITOR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "console.h"
#include "charArray.h"

#define ENTER 13
#define RIGHT 77
#define LEFT 75
#define EXTENDED -32
#define BS 8

void moveCursor(char key, int cursorPosX, int cursorPosY, int limit)
{
    if (LEFT == key)
    {
        gotoxy(cursorPosX - 1, cursorPosY);
        return;
    }

    if (RIGHT == key)
    {
        if (cursorPosX < limit)
        {
            gotoxy(cursorPosX + 1, cursorPosY);
            return;
        }
    }

    return;
}

void redrawLine(char str[], int cursorPosY)
{
    gotoxy(0, cursorPosY);
    for (int i = 0; i < getConsoleWindowWidth(); ++i)
    {
        putchar(' ');
    }
    gotoxy(0, cursorPosY);
    printf("%s", str);
}

void deleteFromLine(char str[], int *length, int *cursorPosX, int *cursorPosY)
{
    deleteElement(str, length, --(*cursorPosX));
    redrawLine(str, *cursorPosY);
    gotoxy(*cursorPosX, *cursorPosY);
}

#endif