#include <stdio.h>

int main(void)

{
    int a, i, j, k=1;

    while (k)
    {
        scanf("%i", &a);

        if (a==0)
            k=0;

        else
        {

        for (i=1; i<=a; ++i)
        {
            if (i==a)
                printf("%i\n", i);

            else
                printf("%i ", i);
        }
        }
    }

    return 0;
}
