#include <stdio.h>

int main(void)

{
    int i, j=0;
    double a[6];

    for (i=0; i<6; ++i)
        scanf("%lf", &a[i]);

    for (i=0; i<6; ++i)
        if (a[i]>0)
            ++j;

    printf("%i valores positivos\n", j);

    return 0;
}
