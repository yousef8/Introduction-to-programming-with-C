#include <stdio.h>

int is_prime(int n);

void print_primes(int begin, int end);

int main()
{
    int begin = 0, end = 0;
    printf("Enter 2 Positive Integers (space separated) : ");
    // Validate only integers allowed
    if (2 != scanf("%d %d", &begin, &end))
    {
        printf("Error, Only Positive Integers Allowed !!!\n");
        return 0;
    }

    // Validate limits of interval are positive
    if (begin < 0 || end < 0)
    {
        printf("Error, Only Positive Integers Allowed !!\n");
        return 0;
    }

    // Validate limits of interval
    if (begin > end)
    {
        printf("Error, Start of interval number must be less than end of interval number !!!\n");
        return 0;
    }

    print_primes(begin, end);

    return 0;
}

int is_prime(int n)
{
    if (0 == n || 1 == n)
    {
        return 0;
    }

    for (int i = n - 1; i > 1; --i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void print_primes(int begin, int end)
{
    for (int i = begin; i <= end; ++i)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
}