#include <stdio.h>

int main(void)

{
    double n, x, y, z, a, b, c;

    scanf("%lf", &n);

    if (n>=0 && n<=2000.00)
        printf("Isento\n");

    else
    {
        x=(n-2000.00);

        if (x<=1000.00)
            a=x*.08;

        else if (x<=2500.00)
        {
            a=(1000*(8/100.0))+((x-1000.00)*.18);
        }

        else
        {
            z=(x-1000.00);
            y=z-1500;
            a=((1000*.08)+((x-1000.00-y)*.18)+((z-1500)*.28));
        }

        printf("R$ %.2lf\n", a);
    }

    return 0;
}
