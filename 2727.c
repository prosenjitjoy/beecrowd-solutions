#include <stdio.h>

int main(void)
{
    int i, j, k, x=0;

    for (i=0; i<3; ++i)
    {
        for (j=0; j<=i; ++j)
        {
            for (k=0; k<=x; ++k)
                printf(".");

            printf(" ");
        }

        printf("\n");
        x++;
    }

    return 0;
}
