#include <stdio.h>
#include <stdlib.h>

#define limit 500000 //size of array

int main()
{
    long long int i, j;
    int *primes;
    int z = 1;

    primes = malloc(sizeof(i) * limit);

    for (i = 2; i < limit; i++)
        primes[i] = 1;

    for (i = 2; i < limit; i++)
        if (primes[i])
            for (j = i; i * j < limit; j++)
                primes[i * j] = 0;

    printf("\nPrime numbers are: \n");
    for (i = 2; i < limit; i++)
        if (primes[i])
            printf("%lld ", i);
    printf("\n");

    return 0;
}
