#include <stdio.h>

int max(int n1, int n2);

int main()
{
    int x = 5;
    int y = 6;
    int z = 7;
    printf("The Largest number between %d, %d and %d is \"%d\"\n", x, y, z, max(z, max(x, y)));
    return 0;
}

int max(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    return n2;
}