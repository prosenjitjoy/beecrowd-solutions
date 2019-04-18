#include <stdio.h>

int main(void)

{
    int n, i, x=0;

    scanf("%i", &n);

    long long int a[n];

    for (i=0; i<n; ++i)
        scanf("%lli", &a[i]);

    for (i=0; i<n; ++i)
    {
        if (a[i]>0)
        {
            if (a[i]%2!=0)
                printf("ODD POSITIVE\n");

            else
                printf("EVEN POSITIVE\n");
        }

        else if (a[i]<0)
        {
            if (a[i]%2!=0)
                printf("ODD NEGATIVE\n");

            else
                printf("EVEN NEGATIVE\n");
        }

        else
            printf("NULL\n");
    }

    return 0;
}
