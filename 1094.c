#include <stdio.h>

struct crs
{
    int num;
    char ch;
};

int main(void)

{
    int n, i, c=0, r=0, s=0, total=0;
    double x, y, z;

    scanf("%i", &n);

    struct crs input[n];

    for (i=0; i<n; ++i)
        scanf("%i %c", &input[i].num, &input[i].ch);

    for (i=0; i<n; ++i)
    {
        total+=input[i].num;

        if (input[i].ch=='C')
            c+=input[i].num;

        else if (input[i].ch=='R')
            r+=input[i].num;

        else if (input[i].ch=='S')
            s+=input[i].num;
    }

    x=((c*100)/(double)total);
    y=((r*100)/(double)total);
    z=((s*100)/(double)total);

    printf("Total: %i cobaias\nTotal de coelhos: %i\nTotal de ratos: %i\nTotal de sapos: %i\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", total, c, r, s, x, y, z);

    return 0;
}
