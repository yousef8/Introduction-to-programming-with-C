#include <stdio.h>

int main()
{
    char ch = 'a';

    // Get Char from user
    printf("Enter one character : ");
    scanf("%c", &ch);

    printf("The ASCII value of \"%c\" is \"%d\"", ch, ch);
    return 0;
}