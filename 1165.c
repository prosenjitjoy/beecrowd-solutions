#include <stdio.h>

int main(void)

{
    int n, i, j, x, y=0, isprime=1;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        scanf("%i", &x);

        isprime=1;

        for (j=2; j<=x/2; ++j)
        {
            if (x%j==0)
            {
                isprime=0;
                break;
            }
        }

        if (isprime==1 && x!=1)
            printf("%i eh primo\n", x);

        else
            printf("%i nao eh primo\n", x);

    }

    return 0;
}

