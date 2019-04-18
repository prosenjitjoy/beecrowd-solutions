#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j=0, k, sum, s, s1=0, s2=0, sa, as;

    while (scanf("%i", &n) != EOF)
    {
        int a[n];
        sum=0;
        s1=0;
        as=0;
        j=0;
        k=n-1;
        for (i=0; i<n; ++i)
        {
            scanf("%i", &a[i]);
            sum+=a[i];
        }

        s=sum/2;

        while (s1<=as)
        {
            s1+=a[j];
            as+=a[k];
            ++j;
            --k;
        }

        s2=sum-s1;


        sa=abs(s1-s2);


        printf("%i\n", sa);
    }

    return 0;
}
