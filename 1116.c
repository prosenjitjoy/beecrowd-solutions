#include <stdio.h>

int main(void)

{
    int n, i, j, a, b;
    double x;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        scanf(" %i %i", &a, &b);

        if (b==0)
            printf("divisao impossivel\n");

        else
        {
            x=a/(double)b;
            printf("%.1lf\n", x);
        }
    }

    return 0;
}

