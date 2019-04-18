#include <stdio.h>

int main(void)

{
    int x, y=6;

    scanf("%i", &x);

    while (y!=0)
    {
        if (x%2!=0)
        {
            printf("%i\n", x);
            --y;
        }

        ++x;
    }

    return 0;
}

