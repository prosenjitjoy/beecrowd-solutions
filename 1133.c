#include <stdio.h>

int main(void)

{
    int i, a, b, x, y;

    scanf("%i %i", &a, &b);

    x=(a<b)?a:b;
    y=(a>b)?a:b;

    for (i=x+1; i<y; ++i)
    {
        if (i%5==2 || i%5==3)
            printf("%i\n", i);
    }

    return 0;
}
