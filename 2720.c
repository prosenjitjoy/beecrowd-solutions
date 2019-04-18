#include <stdio.h>

struct i
{
    int id;
    int sum;
};

int main(void)

{
    int i, j, k, n, a, b, c, x, y;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%i %i", &x, &y);

        struct i info[x], temp;
        int arr[y], tem;

        for (j=0; j<x; ++j)
        {
            scanf("%i %i %i %i", &info[j].id, &a, &b, &c);

            info[j].sum=a*b*c;
        }

        for (j=0; j<x-1; ++j)
        {
            for (k=j+1; k<x; ++k)
            {
                if (info[k].sum>=info[j].sum)
                {
                    temp=info[j];
                    info[j]=info[k];
                    info[k]=temp;
                }
            }
        }

        for (j=0; j<y; ++j)
            arr[j]=info[j].id;

        for (j=0; j<y-1; ++j)
        {
            for (k=j+1; k<y; ++k)
            {
                if (arr[k]<=arr[j])
                {
                    tem=arr[j];
                    arr[j]=arr[k];
                    arr[k]=tem;
                }
            }
        }

        for (j=0; j<y; ++j)
        {
            if (j==y-1)
                printf("%i\n", arr[j]);

            else
                printf("%i ", arr[j]);
        }
    }

    return 0;
}
