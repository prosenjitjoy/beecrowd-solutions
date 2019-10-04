#include <stdio.h>

int main(void)

{
    int i, j, n, a, b;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf(" %i %i", &a, &b);

        printf("%i\n", a+b);
    }

    return 0;
}
