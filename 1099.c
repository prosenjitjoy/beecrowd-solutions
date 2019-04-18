#include <stdio.h>

int main(void)

{
    int n, i, j, a, b, x, y, z;

    scanf("%i", &n);

    int arr[n];

    for (i=0; i<n; ++i)
    {
        scanf(" %i %i", &a, &b);
        x=(a<b)?a:b;
        y=(a>b)?a:b;
        z=0;

        for (j=x+1; j<y; ++j)
            if (j%2!=0)
                z+=j;

        arr[i]=z;
    }

    for (i=0; i<n; ++i)
        printf("%i\n", arr[i]);

    return 0;
}
