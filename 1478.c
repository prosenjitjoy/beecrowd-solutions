#include <stdio.h>
#include <math.h>

int main(void)

{
    int i, j, k, l, n, x, flag=0;

    while (1)
    {
        scanf("%i", &n);

        if (n==0)
            break;

        for (i=1; i<=n; ++i)
        {
            k=i;
            flag=0;
            for (j=1; j<=n; ++j)
            {
                if (j==n)
                    printf("%3i\n", k);

                else
                    printf("%3i ", k);
                if (k==1)
                    flag=1;

                if (flag)
                    k++;
                else
                    k--;
            }
        }

        printf("\n");
    }

    return 0;
}
