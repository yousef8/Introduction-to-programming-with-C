#include <stdio.h>
#include <stdlib.h>
#include <editor.h>

int main()
{
    char line[100] = {0};
    int length = 0;
    printf("Enter:exit    <-/->:movement    Backspace:delete\n");

    char ch = getch();
    int cursorPosX = 0, cursorPosY = 0;
    getCursorPosition(&cursorPosX, &cursorPosY);

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
            line[cursorPosX] = ch;
            ++length;
            putchar(ch);
        }
        ch = getch();
        getCursorPosition(&cursorPosX, &cursorPosY);
    }
    printf("\nYou entered : %s", line);

    return 0;
}
