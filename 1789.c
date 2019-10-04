#include <stdio.h>

int main(void)

{
    int i, n, max;

    while (scanf("%i", &n) != EOF)
    {
        int arr[n];

        for (i=0; i<n; ++i)
            scanf("%i", &arr[i]);

        max=arr[0];

        for (i=0; i<n; ++i)
        {
            if (arr[i]>max)
                max=arr[i];
        }

        if (max<10)
            printf("1\n");

        else if (max>=20)
            printf("3\n");

        else
            printf("2\n");
    }

    return 0;
}
