#include <stdio.h>

struct c
{
    char str[21];
    int num;
};

int main(void)

{
    int n, i, j, x, y;

    while (scanf("%i", &n) != EOF)
    {
        struct c ch[n], temp;

        for (i=0; i<n; ++i)
            scanf("%s %i", ch[i].str, &ch[i].num);

        for (i=0; i<n-1; ++i)
        {
            for (j=i+1; j<n; ++j)
            {
                if (ch[j].num<ch[i].num)
                {
                    temp=ch[i];
                    ch[i]=ch[j];
                    ch[j]=temp;
                }
            }
        }

        for (i=0; i<n; ++i)
        {
            if (i==n-1)
                printf("%s\n", ch[i].str);

            else
                printf("%s ", ch[i].str);
        }
    }

    return 0;
}
