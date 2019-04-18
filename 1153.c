#include <stdio.h>

int main(void)

{
    int fact=1, i, n;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
        fact*=i;

    printf("%i\n", fact);

    return 0;
}
