#include <stdio.h>
#include <string.h>
long long compute_hash(char *s)
{
    const int p = 22;
    const int m = 1e11 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (int c = 0; c < strlen(s); c++)
    {
        hash_value = (hash_value + (s[c] - 'A' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
int main()
{
    char s[1000];
    printf("Enter the String : ");
    scanf("%[^\n]s", s);
    printf("Hash value:  %lld \n", compute_hash(s));
}
