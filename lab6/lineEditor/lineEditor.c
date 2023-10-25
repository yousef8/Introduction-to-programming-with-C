#include <stdio.h>
#include <stdlib.h>
#include <editor.h>

int main()
{
    char line[100] = {0};
    int length = 0;
    printf("Enter:exit    <-/->:movement    Backspace:delete\n");

    int cursorPosX = 0, cursorPosY = 0;
    getCursorPosition(&cursorPosX, &cursorPosY);
    char ch = getch();

    while (ENTER != ch)
    {
        if (EXTENDED == ch)
        {
            ch = getch();
            moveCursor(ch, cursorPosX, cursorPosY, length);
        }
        else if (BS == ch)
        {
            deleteFromLine(line, &length, &cursorPosX, &cursorPosY);
        }
        else
        {
            if (cursorPosX < length) // User inserting characters inside the string
            {
                addToLine(line, &length, &cursorPosX, &cursorPosY, ch);
            }
            else // User appending to the end of the line
            {
                line[cursorPosX] = ch;
                ++length;
            }
            putchar(ch);
        }
        getCursorPosition(&cursorPosX, &cursorPosY);
        ch = getch();
    }
    printf("\nYou entered : %s", line);

    return 0;
}