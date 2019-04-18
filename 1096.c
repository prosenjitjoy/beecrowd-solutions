#include <stdio.h>

int main(void)

{
    int i, j, k;

    for (i=1; i<10; i=i+2)
    {
        k=7;
        for (j=1; j<=3; ++j)
            printf("I=%i J=%i\n", i, k--);
    }

    return 0;
}

