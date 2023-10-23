#include <stdio.h>

int myStrlen(char str[]);

int main()
{
    char str[100] = {0};
    printf("Enter string : ");
    scanf("%[^\n]s", str);

    printf("Your string length is '%d'\n", myStrlen(str));

    return 0;
}

int myStrlen(char str[])
{
    int len = 0;
    for (int i = 0; '\0' != str[i]; ++i)
    {
        ++len;
    }

    return len;
}