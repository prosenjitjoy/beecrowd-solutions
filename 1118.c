#include <stdio.h>

int main(void)

{
    int n=1, i, j, k, a, b, c;
    double x, y;

    while (n)
    {
    k=2;
    y=0;
    while (k)
    {
        scanf(" %lf", &x);

        if (x>=0.0 && x<=10.0)
        {
            y+=x;
            --k;
        }

        else
            printf("nota invalida\n");
    }

    printf("media = %.2lf\n", y/2.0);

    while (1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%i", &a);

        if (a==1)
            break;

        else if (a==2)
        {
            n=0;
            break;
        }
    }
    }
    return 0;
}
