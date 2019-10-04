#include <stdio.h>

struct info
{
    char str[100];
    float b;
    float a[7];
};

int main(void)

{
    int i, j, n;
    float min, max, ans, sum;

    scanf("%i", &n);

    struct info dive[n];

    for (i=0; i<n; ++i)
    {
        scanf("%s %f", dive[i].str, &dive[i].b);

        sum=0.0;

        for (j=0; j<7; ++j)
        {
            scanf("%f", &dive[i].a[j]);
            sum+=dive[i].a[j];
        }

        min=dive[i].a[0];
        max=dive[i].a[0];

        for (j=0; j<7; ++j)
        {
            if (dive[i].a[j]>max)
                max=dive[i].a[j];

            if (dive[i].a[j]<min)
                min=dive[i].a[j];
        }

        sum-=(max+min);
        ans=sum*dive[i].b;

        printf("%s %.2f\n", dive[i].str, ans);
    }

    return 0;
}
