#include <stdio.h>

int main(void)

{
    int n, i, j, x, y;
    unsigned long long int a=0, b=1, c=0;

    scanf("%i", &n);
    unsigned long long int arr[61];

    for (i=0; i<61; ++i)
    {
        arr[i]=c;
        a=b;
        b=c;
        c=a+b;
    }

    for (i=0; i<n; ++i)
    {
        scanf("%i", &x);
        printf("Fib(%i) = %llu\n", x, arr[x]);
    }

    return 0;
}
