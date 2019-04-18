#include <stdio.h>

int main(void)

{
    int n, i, x=0;

    scanf("%i", &n);

    int a[n];

    for (i=0; i<n; ++i)
        scanf("%i", &a[i]);

    for (i=0; i<n; ++i)
    {
        if (a[i]>=10 && a[i]<=20)
           ++x;
    }

    printf("%i in\n%i out\n", x, n-x);

    return 0;
}
