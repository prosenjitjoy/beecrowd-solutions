#include <stdio.h>

int main(void)

{
    int a, n[1000], i, j=0;

    scanf("%i", &a);

    for (i=0; i<1000; ++i)
    {


        printf("N[%i] = %i\n", i, j++);
        if (j==a)
            j=0;
    }

    return 0;
}
