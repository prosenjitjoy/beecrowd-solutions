#include <stdio.h>

int main(void)
{
    unsigned long long int a, b;

    while (scanf("%llu %llu", &a, &b) != EOF)
    {
        printf("%llu\n%llu\n\n", a, b);
    }

    return 0;
}
