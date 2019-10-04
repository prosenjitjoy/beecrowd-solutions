#include <stdio.h>

int main(void)

{
    int n, i;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        if (i==n-1)
            printf("Ho!\n");

        else
            printf("Ho ");
    }

    return 0;
}
