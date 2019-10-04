#include <stdio.h>

int main(void)

{
    int n, i, j;

    scanf("%i", &n);

    double a[n], b[n][3], x;

    for (i=0; i<n; ++i)
    {
        for (j=0; j<3; ++j)
            scanf("%lf", &b[i][j]);
    }

    for (i=0; i<n; ++i)
    {
        x=((b[i][0]*2.0)+(b[i][1]*3.0)+(b[i][2]*5.0))/10.0;
        a[i]=x;
    }

    for (i=0; i<n; ++i)
        printf("%.1lf\n", a[i]);

    return 0;
}

