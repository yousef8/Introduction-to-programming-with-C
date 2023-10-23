#include <stdio.h>

unsigned int reverse_8_bit(unsigned int ch);

int main()
{
    unsigned int ch = 0;

    printf("Enter a positive number : ");
    scanf("%u", &ch);
    printf("%u", reverse_8_bit(ch));

    return 0;
}

unsigned int reverse_8_bit(unsigned int ch)
{
    unsigned int rev = 0;

    while (ch > 0)
    {
        rev <<= 1;

        if (ch & 1 == 1)
        {
            rev ^= 1;
        }

        ch >>= 1;
    }

    return rev;
}