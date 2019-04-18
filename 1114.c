#include <stdio.h>

int main(void)

{
    int n;

    while (1)
    {
        scanf("%i", &n);

        if (n==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }

        else
            printf("Senha Invalida\n");
    }

    return 0;
}
