#include <stdio.h>

int main(void)

{
    int i, j;

    for (i=1; i<=100; ++i)
        if (i%2==0)
            printf("%i\n", i);

    return 0;
}
