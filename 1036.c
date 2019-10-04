#include <stdio.h>
#include <math.h>

int main(void)

{
    double a, b, c, r1, r2, r3;

    scanf("%lf %lf %lf", &a, &b, &c);

    r1=(b*b-4*a*c);

    if (r1<0 || 2*a==0)
        printf("Impossivel calcular\n");

    else
    {
        r3=sqrt(r1);
        r1=(-b+r3)/(2*a);
        r2=(-b-r3)/(2*a);

        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }

    return 0;
}
