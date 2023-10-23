#include <stdio.h>
int isAlphabet(char ch);

int main()
{
    char str[100] = {0};
    printf("Enter string : ");
    scanf("%[^\n]s", str);

    char alphabetStr[100] = {0};
    int idx = 0;

    for (int i = 0; '\0' != str[i]; ++i)
    {
        if (isAlphabet(str[i]))
        {
            alphabetStr[idx++] = str[i];
        }
    }

    printf("Your string with only alphabet characters is \"%s\"", alphabetStr);

    return 0;
}

int isAlphabet(char ch)
{
    if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z'))
    {
        return 1;
    }

    return 0;
}