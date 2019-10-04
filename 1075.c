#include <stdio.h>

int main(void)

{
    int n, i, x, y;

    scanf("%i", &n);

    for (i=1+1; i<10000; ++i)
    {
        if (i%n==2)
            printf("%i\n", i);
    }

    return 0;
}
