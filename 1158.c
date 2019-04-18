#include <stdio.h>

int main(void)

{
    int n, i, j, k=1, a, b, c=0, d=1, sum;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        scanf("%i %i", &a, &b);
        sum=0;
        c=0;
        d=b;

        if (a%2==0)
            a+=1;

        j=a;

        while (d)
        {
            sum+=j;
            j=j+2;
            --d;
        }

        printf("%i\n", sum);

    }

    return 0;
}
