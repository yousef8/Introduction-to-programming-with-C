#include <stdio.h>

int is_alphabet(char ch);

int main()
{
    char ch = 'a';
    printf("Enter Character : ");
    scanf("%c", &ch);
    if (is_alphabet(ch))
    {
        printf("Is Alphabet");
    }
    else
    {
        printf("Not an Alphabet");
    }

    return 0;
}

int is_alphabet(char ch)
{
    if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z'))
    {
        return 1;
    }

    return 0;
}