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

struct Student
{
    char name[50];
    char gender;
    unsigned char age;
    unsigned int id;
};

void gotoOption(int option);
void highlightOption(int option);
void unhighlightOption(int option);

int contOrNot(void);

void showMenu(int option);

int showNew(struct Student students[], int idx);
int readStudent(struct Student students[], int idx);

void showDisplay(struct Student students[], int idx);
void printStudents(struct Student students[], int idx);

int chooseOption(int option);

int main()
{
    int option = DISPLAY;
    struct Student students[100];
    int nextIdx = 0;

    while (EXIT != option)
    {
        showMenu(option);
        option = chooseOption(option);

        if (NEW == option)
        {
            nextIdx = showNew(students, nextIdx);
        }

        if (DISPLAY == option)
        {
            showDisplay(students, nextIdx);
        }
    }
    return 0;
}

void gotoOption(int option)
{
    switch (option)
    {
    case NEW:
        gotoxy(BASE_X_CORD, BASE_Y_CORD + NEW_Y_OFFSET);
        break;
    case DISPLAY:
        gotoxy(BASE_X_CORD, BASE_Y_CORD + DISPLAY_Y_OFFSET);
        break;
    case EXIT:
        gotoxy(BASE_X_CORD, BASE_Y_CORD + EXIT_Y_OFFSET);
        break;
    }
}

void highlightOption(int option)
{
    gotoOption(option);
    setColor(GREEN);

    switch (option)
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

    switch (option)
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

int readStudent(struct Student students[], int idx)
{
    printf("Student no.%d\n", idx + 1);
    printf("Name : ");
    scanf(" %[^\n]s", students[idx].name);

    printf("Gender : ");
    scanf(" %c", &students[idx].gender);
    char ch = 'a';
    while ((ch = getchar()) != '\n' && ch != EOF)
        ; // To eat up all the characters left behind by scanf call including '\n'.
    while ('m' != students[idx].gender && 'f' != students[idx].gender)
    {
        printf("Error, only 1 character m/f lowercase\n");
        printf("Gender : ");
        scanf(" %c", &students[idx].gender);
        while ((ch = getchar()) != '\n' && ch != EOF)
            ; // To eat up all the characters left behind by scanf call including '\n'.
    }

    printf("Age : ");
    scanf("%d", &students[idx].age);

    printf("ID : ");
    scanf("%u", &students[idx].id);

    return ++idx;
}

int contOrNot()
{
    while (1)
    {
        printf("Do you want to continue (y/n) ? ");
        char ch = getch();
        if ('y' == ch || 'Y' == ch)
        {
            return 1;
        }

        if ('n' == ch || 'N' == ch)
        {
            return 0;
        }
    }
}

int showNew(struct Student students[], int idx)
{
    system("cls");

    int cont = 1;

    while (cont)
    {
        idx = readStudent(students, idx);
        cont = contOrNot();
        printf("\n======================\n");
    }

    return idx;
}

void printStudents(struct Student students[], int idx)
{
    for (int i = 0; i < idx; ++i)
    {
        printf("Student %d\n", i + 1);
        printf("Name is %s\n", students[i].name);
        printf("Gender is %c\n", students[i].gender);
        printf("Age is %d\n", students[i].age);
        printf("ID is %u\n", students[i].id);
        printf("\n\n");
    }

    return;
}

void showDisplay(struct Student students[], int idx)
{
    system("cls");

    printStudents(students, idx);
    printf("Press ENTER to exit !!!");

    char key = getche();
    while (ENTER != key)
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

            switch (key)
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
