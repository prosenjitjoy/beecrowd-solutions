#include <stdio.h>

int main(void)

{
    int n, i, j, x, sum;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%i", &x);

        sum=0;

        for (j=0; j<x; ++j)
        {
            if (j%2==0)
            sum+=1;

            else
            sum-=1;
        }

        printf("%i\n", sum);
    }

    return 0;
}
