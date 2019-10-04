#include <stdio.h>
#include <math.h>

int main(void)

{
    int i, j, k, l, n, x;

    while (1)
    {
        scanf("%i", &n);
        l=1;
        k=1;

        if (n==0)
            break;

        for (i=0; i<n; ++i)
        {
            l*=2;
            for (j=0; j<n; ++j)
            {
                if (i==n-1 && j==n-1)
                    x=log10(k)+1;
                k*=2;
            }
            k=l;
        }
        l=1;
        k=1;

        for (i=0; i<n; ++i)
        {
            l*=2;
            for (j=0; j<n; ++j)
            {
                if (j==n-1)
                    printf("%*i\n", x, k);

                else
                    printf("%*i ",x, k);
                k*=2;
            }
            k=l;
        }

        printf("\n");
    }

    return 0;
}
