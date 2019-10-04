#include <stdio.h>

int main(void)

{
    int i, n;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        if (n%i==0)
            printf("%i\n", i);
    }

    return 0;
}
