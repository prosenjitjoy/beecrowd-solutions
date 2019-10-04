#include <stdio.h>

int main(void)

{
    unsigned long long int i, j, n;

    while (1)
    {
        scanf("%llu", &n);

        if (n==-1)
            break;

        if (n==0)
            j=n;
        else
            j=n-1;

        printf("%llu\n", j);
    }

    return 0;
}
