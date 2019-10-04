#include <stdio.h>
#include <string.h>

struct im
{
    char name[50];
    char choice[10];
};

int main(void)

{
    int a, b, i, j, n, x, y;
    char str[10];

    scanf("%i", &n);

    struct im info[2];

    for (i=0; i<n; ++i)
    {
        scanf("%s %s %s %s", info[0].name, info[0].choice, info[1].name, info[1].choice);
        scanf("%i %i", &a, &b);

        x=a+b;

        if (x%2==0)
        {
            for (j=0; j<2; ++j)
            {
                if (strcmp(info[j].choice, "PAR")==0)
                    y=j;
            }

            printf("%s\n", info[y].name);
        }

        else if (x%2!=0)
        {
            for (j=0; j<2; ++j)
            {
                if (strcmp(info[j].choice, "IMPAR")==0)
                    y=j;
            }

            printf("%s\n", info[y].name);
        }
    }

    return 0;
}
