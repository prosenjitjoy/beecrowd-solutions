#include <stdio.h>

int main(void)

{
    int k=2;
    double x, y=0;

    while (k)
    {
        scanf("%lf", &x);

        if (x>=0.0 && x<=10.0)
        {
            y+=x;
            --k;
        }

        else
            printf("nota invalida\n");
    }

    printf("media = %.2lf\n", y/2.0);

    return 0;
}
