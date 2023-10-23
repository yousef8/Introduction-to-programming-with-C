#include <stdio.h>

void strToUpper(char str[]);
char charToUpper(char ch);

int main()
{
    char str[100] = {0};
    printf("Enter string to capialize : ");
    scanf("%[^\n]s", str);

    strToUpper(str);
    printf("Your string capitalized : %s", str);

    return 0;
}

char charToUpper(char ch)
{
    if (97 <= ch && ch <= 122)
    {
        return ch - 32;
    }

    return ch;
}

void strToUpper(char str[])
{
    for (int i = 0; '\0' != str[i]; ++i)
    {
        str[i] = charToUpper(str[i]);
    }

    return;
}