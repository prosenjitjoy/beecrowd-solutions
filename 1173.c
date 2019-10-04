#include <stdio.h>

int main(void)

{
    int n[10], i, j;

    scanf("%i", &j);

    for (i=0; i<10; ++i)
    {
        printf("N[%i] = %i\n", i, j);
        j*=2;
    }

    return 0;
}
