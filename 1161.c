#include <stdio.h>

long long int factorial(int n)
{
    long long int i, fact=1;
    for (i=1; i<=n; ++i)
        fact*=i;
    return fact;
}

int main(void)
{
    long long int a, b, sum;
    while (scanf("%lli %lli", &a, &b)!=EOF)
    {
        sum=0;
        sum+=factorial(a);
        sum+=factorial(b);
        printf("%lli\n", sum);
    }

    return 0;
}
