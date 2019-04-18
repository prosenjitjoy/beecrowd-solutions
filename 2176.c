#include <stdio.h>

int main(void)
{
    char str[1000000];
    int i, j=0, x;

    fgets(str, 1000000, stdin);

    for (i=0; str[i]!=0; ++i)
    {
        if (str[i]=='1')
            ++j;

        printf("%c", str[i]);
    }

    if (j%2==0)
        printf("0\n");

    else
        printf("1\n");

    return 0;
}
