#include <stdio.h>

int main(void)

{
    int i, j, a, b, c=1, sum=0;

    scanf("%i", &a);

    while (c)
    {
        scanf("%i", &b);

        if (b<=0)
            c=1;

        else
            c=0;
    }

    for (i=a; i<a+b; ++i)
        sum+=i;

    printf("%i\n", sum);

    return 0;
}
