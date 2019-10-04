#include <stdio.h>

int main(void)

{
    int i;
    double n, x, y;

    scanf("%lf", &n);

    for (i=0; i<100; ++i)
    {
        printf("N[%i] = %.4lf\n", i, n);
        n/=2.0;
    }

    return 0;
}
