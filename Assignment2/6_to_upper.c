#include <stdio.h>

char to_upper(char ch);

int main()
{
    char ch = 'a';
    printf("Enter a character to capitalize it : ");
    scanf("%c", &ch);
    if (!(65 <= ch && ch <= 90) && !(97 <= ch && ch <= 122))
    {
        printf("Error, Not a Character !!!\n");
        return 0;
    }

    printf("After Capitalization \"%c\"\n", to_upper(ch));
    return 0;
}

char to_upper(char ch)
{
    if (97 <= ch && ch <= 122)
    {
        return ch - 32;
    }

    return ch;
}