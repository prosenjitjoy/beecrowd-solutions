#include <stdio.h>
#include <math.h>

int main(void)

{
    int i, j, k;
    double a, b, c, x[3], y, z;

    for (i=0; i<3; ++i)
        scanf("%lf", &x[i]);

    for (i=0; i<3-1; ++i)
    {
        for (j=i+1; j<3; ++j)
        {
            if (x[j]>x[i])
            {
                y=x[i];
                x[i]=x[j];
                x[j]=y;
            }
        }
    }

    if (x[0]>=(x[1]+x[2]))
        printf("NAO FORMA TRIANGULO\n");

    else if (pow(x[0], 2)==(pow(x[1], 2)+pow(x[2], 2)))
        printf("TRIANGULO RETANGULO\n");

    else if (pow(x[0], 2)>(pow(x[1], 2)+pow(x[2], 2)))
        printf("TRIANGULO OBTUSANGULO\n");

    else if (pow(x[0], 2)<(pow(x[1], 2)+pow(x[2], 2)))
        printf("TRIANGULO ACUTANGULO\n");

    if (x[0]==x[1] && x[1]==x[2])
        printf("TRIANGULO EQUILATERO\n");

    if (x[0]==x[1] && x[1]!=x[2] || x[0]==x[2] && x[2]!=x[1] || x[1]==x[2] && x[2]!=x[0])
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}
