#include <stdio.h>

int main(void)

{
    int i, j=1;

    for (i=60; i>=0; i=i-5)
    {
        printf("I=%i J=%i\n", j, i);;
        j+=3;
    }

    return 0;
}
