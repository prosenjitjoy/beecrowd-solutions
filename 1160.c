#include <stdio.h>

int main(void)

{
    int n, i, j=0;
    long int a, b;
    double x, y, p, q;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%li %li %lf %lf", &a, &b, &x, &y);
        j=0;
        while (a<=b)
        {
            a+=(a*x)/100.0;
            b+=(b*y)/100.0;
            ++j;

            if (j>100)
                break;
        }

        if (j<=100)
            printf("%i anos.\n", j);

        else
            printf("Mais de 1 seculo.\n");
    }

    return 0;
}
