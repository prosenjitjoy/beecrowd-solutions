#include <stdio.h>

int main(void)

{
    int n, a, b, c, x=0, y=0, z=0;

    while (1)
    {
        scanf("%i", &n);

        if (n==4)
            break;

        else if (n>=1 && n<=3)
        {
            if (n==1)
                ++x;

            else if (n==2)
                ++y;

            else
                ++z;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n", x, y, z);

    return 0;
}
