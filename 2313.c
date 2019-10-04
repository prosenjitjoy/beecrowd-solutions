#include <stdio.h>

int main(void)

{
    int i, j, a[3], temp;

    for (i=0; i<3; ++i)
        scanf("%i", &a[i]);

    for (i=0; i<3-1; ++i)
    {
        for (j=i+1; j<3; ++j)
        {
            if (a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    if (a[2]>=a[0]+a[1])
        printf("Invalido\n");

    else
    {
        if (a[0]==a[1] && a[1]==a[2])
            printf("Valido-Equilatero\n");

        else if (a[0]!=a[1] && a[0]!=a[2] && a[1]!=a[2])
            printf("Valido-Escaleno\n");

        else
            printf("Valido-Isoceles\n");

        if (a[2]*a[2]==(a[0]*a[0]+a[1]*a[1]))
            printf("Retangulo: S\n");

        else
            printf("Retangulo: N\n");
    }

    return 0;
}
