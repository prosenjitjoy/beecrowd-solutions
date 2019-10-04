#include <stdio.h>

int main()
{
    unsigned int t, n, x, c, i;
    scanf("%u", &t);
    while (t--)
    {
        scanf("%u", &n);
        int v[231]={0};
        c=0;
        for (i=0; i<n; ++i)
        {
            scanf("%u", &x);
            v[x]++;
        }
        for (i=20; i<231; ++i)
        {
            if (v[i]!=0)
            {
                x=v[i];
                while (x--)
                {
                    printf("%u", i);
                    c++;
                    if (c!=n)
                        printf(" ");
                    else
                        printf("\n");
                }
            }
        }
    }
    return 0;
}
