#include <stdio.h>

int main(void)

{
    int i, j, n, x, y;
    double arr[12][12], sum=0, res;
    char ch;

    scanf("%i %c", &n, &ch);

    for (i=0; i<12; ++i)
    {
        for (j=0; j<12; ++j)
            scanf("%lf", &arr[i][j]);
    }

    for (i=0; i<12; ++i)
    {
        for (j=0; j<12; ++j)
        {
            if (i==n)
                sum+=arr[i][j];
        }
    }

    if (ch=='S')
        printf("%.1lf\n", sum);

    else if (ch=='M')
    {
        res=sum/12.0;
        printf("%.1lf\n", res);
    }

    return 0;
}
