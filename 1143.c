#include <stdio.h>
#include <math.h>

int main(void)

{
    int i, j, k=1, n, x;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        for (j=1; j<=3; ++j)
        {
            x=pow(i, j);

            if (j==3)
                printf("%d\n", x);
            else
                printf("%d ", x);
        }
    }

    return 0;
}

