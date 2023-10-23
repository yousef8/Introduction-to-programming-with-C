#include <stdio.h>

int main()
{
    char str[100] = {0};
    printf("Enter a string : ");
    scanf("%[^\n]s", str);
    printf("You Entered : %s\n", str);

    char charCounted[100] = {0};
    int charCountedIndex = 0;

    for (int i = 0; '\0' != str[i]; ++i)
    {
        // Check if we already counted frequency for the character
        int counted = 0;
        for (int c = 0; c < charCountedIndex; ++c)
        {
            if (charCounted[c] == str[i])
            {
                counted = 1;
            }
        }

        if (!counted)
        {
            int count = 0;
            for (int j = 0; '\0' != str[j]; ++j)
            {
                if (str[j] == str[i])
                {
                    ++count;
                }
            }
            charCounted[charCountedIndex++] = str[i];

            printf("\"%c\" repeated \"%d\" times\n", str[i], count);
        }
    }
    return 0;
}