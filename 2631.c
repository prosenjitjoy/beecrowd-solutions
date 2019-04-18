#include <stdio.h>

struct r
{
    int a, b;
};

int main(void)

{
    int a, b, c, x, y, z, i, j;

    while (scanf("%i %i %i", &a, &b, &c) != EOF)
    {
        struct r a1[b], a2[c];

        for (i=0; i<b; ++i)
            scanf("%i %i", &a1[i].a, &a1[i].b);

        for (i=0; i<c; ++i)
            scanf("%i %i", &a2[i].a, &a2[i].b);

        for (i=0; i<b; ++i)
        {
            for (j=0; j<c; ++j)
            {
                if (a1[i].a==a2[j].b || a1[i].a==a2[j].a)
                {
                    if (a1[i].a==a2[j].b)
                        ;
                }
            }
        }


    }
}
