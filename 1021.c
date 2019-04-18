#include <stdio.h>

int main(void)

{
    double n;
    int x, y, z, a, b, c, d, e, f, g, h, i, j, k, l;

    scanf("%lf", &n);

    x=z=n;
    n*=100;
    x*=100;
    y=n-x;

    a=z/100;
    z=z%100;
    b=z/50;
    z=z%50;
    c=z/20;
    z=z%20;
    d=z/10;
    z=z%10;
    e=z/5;
    z=z%5;
    f=z/2;
    z=z%2;
    g=z/1;
    h=y/50;
    y=y%50;
    i=y/25;
    y=y%25;
    j=y/10;
    y=y%10;
    k=y/5;
    y=y%5;
    l=y/1;

    printf("NOTAS:\n%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\nMOEDAS:\n%i moeda(s) de R$ 1.00\n%i moeda(s) de R$ 0.50\n%i moeda(s) de R$ 0.25\n%i moeda(s) de R$ 0.10\n%i moeda(s) de R$ 0.05\n%i moeda(s) de R$ 0.01\n", a, b, c, d, e, f, g, h, i, j, k, l);

    return 0;
}
