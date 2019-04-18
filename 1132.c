#include <stdio.h>

int main(void)

{
    int i, j, sum=0, a, b, x, y;

    scanf("%i %i", &a, &b);

    x=(a<b)?a:b;
    y=(a>b)?a:b;

    for (i=x; i<=y; ++i)
    {
        if (i%13!=0)
            sum+=i;
    }

    printf("%i\n", sum);

    return 0;
}
