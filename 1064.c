#include <stdio.h>

int main(void)

{
    int i, j=0;
    double a[6], sum=0.0, x;

    for (i=0; i<6; ++i)
        scanf("%lf", &a[i]);

    for (i=0; i<6; ++i)
        if (a[i]>0)
        {
            ++j;
            sum+=a[i];
        }

    x=sum/(double)j;

    printf("%i valores positivos\n%.1lf\n", j, x);

    return 0;
}
