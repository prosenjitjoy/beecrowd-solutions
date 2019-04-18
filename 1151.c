#include <stdio.h>

int main(void)

{
    int i, n;
    unsigned long long int a=0, b=1, c=0;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        if (i==n)
            printf("%llu\n", c);

        else
            printf("%llu ", c);
        a=b;
        b=c;
        c=a+b;
    }

    return 0;

}
