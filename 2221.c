#include <stdio.h>

int main(void)

{
    int i, n, a1, a2, d1, d2, b, b1, b2, v1, v2;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%i", &b);
        v1=0;
        v2=0;

        scanf("%i %i %i %i %i %i", &a1, &d1, &b1, &a2, &d2, &b2);

        if (b1%2==0)
            v1=((a1+d1)/2)+b;

        else
            v1=(a1+d1)/2;

        if (b2%2==0)
            v2=((a2+d2)/2)+b;

        else
            v2=(a2+d2)/2;

        if (v1==v2)
            printf("Empate\n");

        else if (v1>v2)
            printf("Dabriel\n");

        else
            printf("Guarte\n");
    }

    return 0;
}
