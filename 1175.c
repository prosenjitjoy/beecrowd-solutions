#include <stdio.h>

int main(void)

{
    int n[20], i, j, t;

    for (i=0; i<20; ++i)
        scanf("%i", &n[i]);

    i=0;
    j=19;

    while (i<j)
    {
        t=n[i];
        n[i]=n[j];
        n[j]=t;

        i++;
        j--;
    }

    for (i=0; i<20; ++i)
        printf("N[%i] = %i\n", i, n[i]);

    return 0;

}
