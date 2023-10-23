#include <stdio.h>

int main()
{
    int x = 5;
    int y = 9;

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %f\n", x, y, (float)x / y);
    return 0;
}