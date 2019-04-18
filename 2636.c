#include <stdio.h>

int prime(int x)
{
    long long int i, j, flag=1;

    for (i=2; i<=x/2; ++i)
    {
        if (x%i==0)
        {
            flag=0;
            break;
        }
    }

    if (flag && x!=1)
        return 1;

    else
        return 0;
}

int main(void)

{
    long long int i, j, k, l, m=1, n, a, b, c;

    while (1)
    {
        scanf("%lli", &n);
        int arr[n/2];

        l=0;

        if (n==0)
            break;

        for (i=1; i<n; ++i)
        {
            if (n%i==0)
            {
                if (prime(i))
                    arr[l++]=i;
            }
        }

        for (i=0; i<l; ++i)
            printf("%i ", arr[i]);

        /*for (i=0; i<l && m; ++i)
        {
            for (j=0; j<l && m; ++j)
            {
                for (k=0; k<l && m; ++k)
                {
                    if (arr[i]*arr[j]*arr[k]==n)
                    {
                        a=i;
                        b=j;
                        c=k;
                        m=0;
                    }
                }
            }
        }

        printf("%i = %i x %i x %i\n", n, a, b, c);*/
    }

    return 0;
}
