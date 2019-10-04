#include <stdio.h>

struct abc
{
    int p, q;
};


int main(void)

{
    int i, j, a=1, b=1,x, y, sum=0, count=0;
    struct abc in[10000];

    while (1)
    {
        scanf(" %i %i", &a, &b);
        if (a<=0 || b<=0)
            break;
        x=(a<b)?a:b;
        y=(a>b)?a:b;
        in[count].p=x;
        in[count].q=y;
        ++count;
    }

    for (i=0; i<count; ++i)
    {
        sum=0;
        for (j=in[i].p; j<=in[i].q; ++j)
        {
            sum+=j;
            printf("%i ", j);
        }

        printf("Sum=%i\n", sum);
    }

    return 0;
}
