#include <stdio.h>

int main(void)

{
    int i, j;
    double a[100];

    for (i=0; i<100; ++i)
        scanf("%lf", &a[i]);

    for (i=0; i<100; ++i)
    {
        if (a[i]<=10)
            printf("A[%i] = %.1lf\n", i, a[i]);
    }

    return 0;
}
