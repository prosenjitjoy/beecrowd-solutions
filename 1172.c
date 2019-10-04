#include <stdio.h>

int main(void)

{
    int x[10], i;

    for (i=0; i<10; ++i)
        scanf("%i", &x[i]);

    for (i=0; i<10; ++i)
    {
        if (x[i]<=0)
            x[i]=1;
    }

    for (i=0; i<10; ++i)
        printf("X[%i] = %i\n", i, x[i]);

    return 0;
}
