#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    double a, b, c, x, y;

    scanf("%lf %lf %lf", &a, &b, &c);

    x=(a+b+c)/2.0;

    if (((a+b)>c && c>abs(a-b))|| ((a+c)>b && b>abs(a-c))|| ((b+c)>a && a>abs(b-c)))
    {
        y=a+b+c;

        printf("Perimetro = %.1lf\n", y);
    }

    else
    {
        y=.5*(a+b)*c;

        printf("Area = %.1lf\n", y);
    }

    return 0;
}
