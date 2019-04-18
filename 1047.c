#include <stdio.h>

int main(void)

{
    int a, b, c, d, x, y, p, q, r;

    scanf("%i %i %i %i", &a, &b, &c, &d);

    x=a*60+b;
    y=c*60+d;

    if (x>y)
        p=(1440-x)+y;

    else if (y>x)
        p=y-x;

    else
        p=1440;

    q=p/60;
    r=p%60;

    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", q, r);

    return 0;
}
