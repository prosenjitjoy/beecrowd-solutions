#include <stdio.h>

int main(void)

{
    int x, y, a, b, c, i, sum=0;

    scanf("%i %i", &x, &y);

    a=(x<y)?x:y;
    b=(x>y)?x:y;

    for (i=a+1; i<b; ++i)
    {
        if (i%2!=0)
            sum+=i;
    }

    printf("%i\n", sum);

    return 0;
}
