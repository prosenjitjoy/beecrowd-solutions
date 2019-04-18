#include <stdio.h>

int main(void)

{
    int i, j, a, b, count=0, arr[10000];

    while (1)
    {
        scanf(" %i %i", &a, &b);
        if (a==b)
            break;

        else if (a>b)
            arr[count]=0;

        else
            arr[count]=1;

        ++count;
    }

    for (i=0; i<count; ++i)
    {
        if (arr[i]==0)
            printf("Decrescente\n");

        else if (arr[i]==1)
            printf("Crescente\n");
    }

    return 0;
}
