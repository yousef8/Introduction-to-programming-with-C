#include <stdio.h>

int main()
{
    // EASY Way
    /*
    char first_name[100] = {0};
        char last_name[100] = {0};

        printf("Enter first name : ");
        scanf("%s", first_name);

        printf("Enter last name : ");
        scanf("%s", last_name);

        printf("Your full name : %s %s", first_name, last_name);

    */

    // HARD Way
    char full_name[100] = {0};

    printf("Enter first name : ");
    scanf("%s", full_name);

    int first_name_length = 0;
    while (full_name[first_name_length] != '\0')
    {
        ++first_name_length;
    }

    full_name[first_name_length] = ' ';

    printf("Enter last name : ");
    scanf("%s", &full_name[++first_name_length]);

    printf("your full name is  %s", full_name);

    return 0;
}