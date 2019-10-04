#include <stdio.h>

int main(void)

{
    int i, j, k=0, n;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        for (j=1; j<=4; ++j)
        {
            if (j==4)
                printf("PUM\n");

            else
                printf("%i ", ++k);
        }
        k++;
    }

    return 0;
}
