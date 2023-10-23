#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "console.h"

#define BASE_X_CORD 10
#define BASE_Y_CORD 5

#define NEW_Y_OFFSET 0
#define DISPLAY_Y_OFFSET 10
#define EXIT_Y_OFFSET 20

#define NEW 1
#define DISPLAY 2
#define EXIT 3

#define UP 72
#define DOWN 80
#define ENTER 13
#define EXTENDED -32

#define GREEN 2
#define WHITE 15

void gotoOption(int option);
void highlightOption(int option);
void unhighlightOption(int option);

void showMenu(int option);
void showNew(void);
void showDisplay(void);

int chooseOption(int option);

int main()
{
    int option = DISPLAY;

    while (EXIT != option)
    {
        showMenu(option);
        option = chooseOption(option);

        if (NEW == option)
        {
            showNew();
        }

        if (DISPLAY == option)
        {
            showDisplay();
        }
    }
    return 0;
}

void gotoOption(int option)
{
    switch(option)
    {
    case NEW:
        gotoxy(BASE_X_CORD, BASE_Y_CORD+NEW_Y_OFFSET);
        break;
    case DISPLAY:
        gotoxy(BASE_X_CORD, BASE_Y_CORD+DISPLAY_Y_OFFSET);
        break;
    case EXIT:
        gotoxy(BASE_X_CORD, BASE_Y_CORD+EXIT_Y_OFFSET);
        break;
    }
}

void highlightOption(int option)
{
    gotoOption(option);
    setColor(GREEN);

    switch(option)
    {
    case NEW:
        printf("NEW");
        break;
    case DISPLAY:
        printf("DISPLAY");
        break;
    case EXIT:
        printf("EXIT");
        break;
    }
    setColor(WHITE);
}

void unhighlightOption(int option)
{
    gotoOption(option);
    setColor(WHITE);

    switch(option)
    {
    case NEW:
        printf("NEW");
        break;
    case DISPLAY:
        printf("DISPLAY");
        break;
    case EXIT:
        printf("EXIT");
        break;
    }
}

void showMenu(int option)
{
    system("cls");

    gotoOption(NEW);
    printf("NEW");

    gotoOption(DISPLAY);
    printf("DISPLAY");

    gotoOption(EXIT);
    printf("EXIT");

    gotoOption(option);
    highlightOption(option);
}

void showNew()
{
    system("cls");

    gotoxy(25, 15);
    printf("NEW");
    gotoxy(25, 16);
    printf("Press ENTER to exit !!!");

    char key = getche();
    while (13 != key)
    {
        key = getch();
    }

    return;
}

void showDisplay()
{
    system("cls");

    gotoxy(25, 15);
    printf("DISPLAY");
    gotoxy(25, 16);
    printf("Press ENTER to exit !!!");

    char key = getche();
    while (13 != key)
    {
        key = getch();
    }

    return;
}

int chooseOption(int option)
{
    char key = getch();

    while (ENTER != key)
    {
        if (EXTENDED == key)
        {
            key = getch();

            unhighlightOption(option);

            switch(key)
            {
            case UP:
                --option;
                break;
            case DOWN:
                ++option;
                break;
            default:
                option;
            }

            if (option < 1)
            {
                option = EXIT;
            }

            if (option > 3)
            {
                option = NEW;
            }

            highlightOption(option);
        }
        key = getch();
    }

    return option;
}
