#include <stdio.h>

int main(void)

{
    int i, j, a, b, n, x, y;
    double ans;

    while (scanf("%i", &n) != EOF)
    {
        double arr[n];

        arr[0]=0;

        for (i=1; i<=n; ++i)
        {
            scanf("%i %i", &a, &b);

            ans=b/(double)a;

            arr[i]=ans;
        }

        for (i=0; i<=n; ++i)
        {
            if (i==0)
                continue;

            if (arr[i-1]<=arr[i])
                printf("%i\n", i);
        }
    }

    return 0;
}
