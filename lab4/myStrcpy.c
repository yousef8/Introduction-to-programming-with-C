#include <stdio.h>

void myStrcpy(char dest[], char src[]);

int main()
{
    char src[100] = {0};
    printf("Enter a string : ");
    scanf("%[^\n]s", src);

    char dest[100] = {'a'};
    myStrcpy(dest, src);

    printf("The copied text is %s\n", dest);
    return 0;
}

void myStrcpy(char dest[], char src[])
{
    int i = 0;
    for (; '\0' != src[i]; ++i)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';

    return;
}