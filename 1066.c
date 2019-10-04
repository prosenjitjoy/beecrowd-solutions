#include <stdio.h>

int main(void)

{
    int i, j=0, k=0, l=0;
    int a[5];

    for (i=0; i<5; ++i)
        scanf("%i", &a[i]);

    for (i=0; i<5; ++i)
    {
        if (a[i]%2==0)
            ++j;
        if (a[i]>0)
            ++k;
        if (a[i]<0)
            ++l;
    }

    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", j, 5-j, k, l);

    return 0;
}

