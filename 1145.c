#include <stdio.h>

int main(void)

{
    int i, j, x, y, z=1, a=1;

    scanf("%i %i", &x, &y);

    while (a)
    {
        for (j=1; j<=x; ++j)
        {

            if (j==x)
                printf("%i\n", z++);

            else
                printf("%i ", z++);

            if (z==y)
            {
                a=0;
                break;
            }
        }
    }
    printf("%i\n", y);
    return 0;
}
