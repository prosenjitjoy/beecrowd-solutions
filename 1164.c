#include <stdio.h>

int main(void)

{
    int n, i, j, x, y=0;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        scanf("%i", &x);

        y=0;

        for (j=1; j<x; ++j)
        {
            if (x%j==0)
                y+=j;
        }

        if (y==x)
            printf("%i eh perfeito\n", x);

        else
            printf("%i nao eh perfeito\n", x);

    }

    return 0;
}
