#include <stdio.h>
#include <math.h>

void PrintScientific(double d)
{
    //if (d==0.0|| d==-0.0)
    int exponent=(int)floor(log10(fabs(d)));
    double base=d*pow(10,-1.0*exponent);
    char str[5];

    if (d>0)
        printf("+");

    printf("%.4lfE", base);
    if (exponent>0)
        printf("+");
    sprintf(str, "%02d\n",exponent);
}

int main(void)

{
    double a;

    scanf("%lf", &a);

    PrintScientific(a);

    return 0;
}
