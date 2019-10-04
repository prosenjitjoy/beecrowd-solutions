#include <stdio.h>

int main(void)

{
    int n, i, x, y, z;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        if (i%2==0)
            printf("%i^2 = %i\n", i, i*i);
    }

    return 0;
}
