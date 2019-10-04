#include <stdio.h>

int main(void)

{
    int i, j;
    double k=0, l=1;

    for (i=1; i<=11; ++i)
    {
        for (j=1; j<=3; ++j)
        {
            printf("I=%g J=%g\n", k, j+k);
        }
        k+=.2;
    }

    return 0;
}


