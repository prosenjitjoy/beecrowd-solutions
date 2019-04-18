#include <stdio.h>

int main(void)

{
    int i, j;
    double sum=0.0;

    for (i=1; i<=100; ++i)
    {
        sum+=(1/(double)i);
    }

    printf("%.2lf\n", sum);

    return 0;
}
