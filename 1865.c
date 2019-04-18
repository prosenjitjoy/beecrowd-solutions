#include <stdio.h>
#include <string.h>

int main(void)

{
    int n, i, j, x;
    char str[100];

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%s %i", str, &x);

        if (strcmp(str, "Thor")==0)
            printf("Y\n");

        else
            printf("N\n");
    }

    return 0;
}
