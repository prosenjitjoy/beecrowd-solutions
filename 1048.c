#include <stdio.h>

int main(void)

{
    double x, y, z;
    int a;

    scanf("%lf", &x);

    if (x>=0 && x<=400.00)
        a=15;

    else if (x>=400.01 && x<=800.00)
        a=12;

    else if (x>=800.01 && x<=1200.00)
        a=10;

    else if (x>=1200.01 && x<=2000.00)
        a=7;

    else if (x>2000.00)
        a=4;

    y=x*((double)a/100);
    z=x+y;

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %i %%\n", z, y, a);

    return 0;
}
