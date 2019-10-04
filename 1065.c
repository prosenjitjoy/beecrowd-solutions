#include <stdio.h>

int main(void)

{
    int i, j=0;
    int a[5];

    for (i=0; i<5; ++i)
        scanf("%i", &a[i]);

    for (i=0; i<5; ++i)
        if (a[i]%2==0)
            ++j;

    printf("%i valores pares\n", j);

    return 0;
}
