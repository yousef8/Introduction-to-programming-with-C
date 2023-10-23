#include <stdio.h>

int main()
{
    char arr[100] = {0};

    printf("Enter your Phrase : ");
    scanf("%[^\n]s", arr);

    printf("You entered : %s", arr);

    return 0;
}