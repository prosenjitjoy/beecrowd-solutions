#include <stdio.h>

int main(void)

{
    int a, b, x=0, y=0, z=0, i=1, j=0;

    while (i)
    {
        scanf(" %i %i", &a, &b);

        if (a>b)
            ++x;

        else if (a<b)
            ++y;

        else
            ++z;

        while (1)
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%i", &a);

            if (a==1)
                break;

            else if (a==2)
            {
                i=0;
                break;
            }
        }

        ++j;
    }

    printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\n", j, x, y, z);

    if (x>y)
        printf("Inter venceu mais\n");

    else if (x<y)
        printf("Gremio venceu mais\n");

    else
        printf("Nao houve vencedor\n");

    return 0;
}
