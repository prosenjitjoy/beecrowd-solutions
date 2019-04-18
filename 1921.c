#include <stdio.h>

int main(void)
{
    long long int n, x;
    scanf("%lli", &n);

    x=(n*(n-1))/2;
    x=x-n;

    printf("%lli\n", x);

    return 0;
}
