#include <stdio.h>

int main(void)

{
    int i, n, x=0;

    scanf("%i", &n);

    int arr[n];

    for (i=0; i<n; ++i)
        scanf("%i", &arr[i]);

    for (i=0; i<n-1; ++i)
    {
        if (arr[i]>arr[i+1])
        {
            x=i+2;
            break;
        }
    }

    printf("%i\n", x);

    return 0;
}
