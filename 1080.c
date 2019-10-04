#include <stdio.h>

int main(void)

{
    int i, j, max, a[100];

    for (i=0; i<100; ++i)
        scanf("%i", &a[i]);

    max=a[0];

    for (i=0; i<100; ++i)
    {
        if (a[i]>max)
        {
            max=a[i];
            j=i;
        }
    }

    printf("%i\n%i\n", max, j+1);

    return 0;
}
