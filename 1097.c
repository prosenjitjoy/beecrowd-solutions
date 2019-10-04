#include <stdio.h>

int main(void)

{
    int i, j, k=7;

    for (i=1; i<10; i=i+2)
    {
        for (j=1; j<=3; ++j)
            printf("I=%i J=%i\n", i, k--);
        k+=5;
    }

    return 0;
}

