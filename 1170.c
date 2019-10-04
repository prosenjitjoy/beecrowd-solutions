#include <stdio.h>

int main(void)
{
    int i, n, c;
    double x;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%lf", &x);
        c=0;

        while (x>1.0)
        {
            x/=2.0;
            ++c;
        }
        printf("%i dias\n", c);
    }

    return 0;
}
