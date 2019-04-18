#include <stdio.h>

int main(void)

{
    double a, b, c, d, x, y, z, is;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    x=a*2+b*3+c*4+d*1;
    x/=10;



    if (x>=7.0)
        is=1;

    else if (x<5.0)
        is=2;

    else
    {
        is=3;

        scanf("%lf", &y);

    }

    printf("Media: %.1lf\n", x);

    if (is==1)
        printf("Aluno aprovado.\n");

    else if (is==2)
        printf("Aluno reprovado.\n");

    else if (is==3)
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", y);

        z=(x+y)/2.0;

        if (z>=5.0)
            printf("Aluno aprovado.\n");

        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1lf\n", z);
    }

    return 0;
}
