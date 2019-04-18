#include <stdio.h>

int main(void)

{
    int i, j, a, b, c=1, d=1, sum=0;

    scanf("%i", &a);

    while (c)
    {
        scanf("%i", &b);

        if (b<=a)
            c=1;

        else
            c=0;
    }

   for (i=a, d=1; i<=b; ++i, ++d)
   {
       sum+=i;
       if (sum>b)
        break;
   }

    printf("%i\n", d);

    return 0;
}
