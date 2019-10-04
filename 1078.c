#include <stdio.h>

int main(void)

{
    int n, i, x;

    scanf("%i", &n);

    for (i=1; i<=10; ++i)
        printf("%i x %i = %i\n", i, n, i*n);

    return 0;
}
