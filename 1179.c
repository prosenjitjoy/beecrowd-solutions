#include <stdio.h>

int main(void)

{
    int arr[15], par[5], impar[5], i, j, x=0, y=0, e, o;

    for (i=0; i<15; ++i)
        scanf("%i", &arr[i]);

    for (i=0; i<15; ++i)
    {
        if (arr[i]%2==0)
        {
            par[x++]=arr[i];

            if (x==5)
            {
                x=0;
                for (j=0; j<5; ++j)
                    printf("par[%i] = %i\n", j, par[j]);
            }
        }

        else
        {
            impar[y++]=arr[i];

            if (y==5)
            {
                y=0;
                for (j=0; j<5; ++j)
                    printf("impar[%i] = %i\n", j, impar[j]);
            }
        }
    }

    for (i=0; i<y; ++i)
        printf("impar[%i] = %i\n", i, impar[i]);

    for (i=0; i<x; ++i)
        printf("par[%i] = %i\n", i, par[i]);

    return 0;
}
