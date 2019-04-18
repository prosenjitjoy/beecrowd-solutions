#include <stdio.h>

int main(void)

{
    int a, b=0, c=1, d=0;
    double x;

    while (c)
    {
        scanf("%i", &a);
        if (a<0)
            break;
        ++d;
        b+=a;


    }

    x=b/(double)d;

    printf("%.2lf\n", x);

    return 0;
}
