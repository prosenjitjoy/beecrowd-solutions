#include <stdio.h>

int main(void)

{
    int n, j, x=1, y, sum;

    while (x)
    {
        scanf("%i", &n);

        if (n==0)
            break;

        if (n%2!=0)
            n+=1;

        j=n;
        y=5;
        sum=0;

        while (y)
        {
            sum+=j;
            j=j+2;
            --y;
        }

        printf("%i\n", sum);
    }

    return 0;
}
