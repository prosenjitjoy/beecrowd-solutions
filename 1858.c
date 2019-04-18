#include <stdio.h>

int main(void)

{
    int i, j=0, n, min;

    scanf("%i", &n);

    int arr[n];

    for (i=0; i<n; ++i)
        scanf("%i", &arr[i]);

    min=arr[0];

    for (i=0; i<n; ++i)
    {
        if (arr[i]<min)
        {
            min=arr[i];
            j=i;
        }
    }

    printf("%i\n", j+1);

    return 0;
}
