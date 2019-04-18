#include <stdio.h>

int main(void)

{
    int a, b, c;

    scanf("%i %i", &a, &b);

    if (a>b)
        c=(24-a)+b;

    else if (b>a)
        c=b-a;

    else
        c=24;

    printf("O JOGO DUROU %i HORA(S)\n", c);;

    return 0;
}
