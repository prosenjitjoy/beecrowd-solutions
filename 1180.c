#include <stdio.h>

int main(void)

{
    int n, i, j, x, y;

    scanf("%i", &n);

    int arr[n];

    for (i=0; i<n; ++i)
        scanf("%i", &arr[i]);

    x=arr[0];

    for (i=0; i<n; ++i)
    {
        if (arr[i]<x)
        {
            x=arr[i];
            y=i;
        }
    }

    printf("Menor valor: %i\nPosicao: %i\n", x, y);

    return 0;
}
