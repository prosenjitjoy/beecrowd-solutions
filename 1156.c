#include <stdio.h>

int main(void)

{
    int i, j=1, k=1;
    double sum=0;

    while (1)
    {
        if (j>39)
            break;
        sum+=(j/(double)k);
        j+=2;
        k*=2;
    }

    printf("%.2lf\n", sum);

    return 0;
}

