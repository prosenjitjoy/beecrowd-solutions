#include <stdio.h>

int main(void)

{
    int a, b;

    while (1)
    {
        scanf(" %i %i", &a, &b);

        if (a==0 || b==0)
            break;

        else if (a>0 && b>0)
            printf("primeiro\n");

        else if (a>0)
            printf("quarto\n");

        else if (b>0)
            printf("segundo\n");

        else
            printf("terceiro\n");
    }

    return 0;
}
