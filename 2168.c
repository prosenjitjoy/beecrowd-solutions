#include <stdio.h>

int main(void)
{
    int n, i, j, x=0;

    scanf("%i", &n);

    int arr[n+1][n+1];
    char ar[n][n];

    for (i=0; i<=n; ++i)
    {
        for (j=0; j<=n; ++j)
            scanf("%i", &arr[i][j]);
    }

    for (i=1; i<=n; ++i)
    {
        for (j=1; j<=n; ++j)
        {
            if (arr[i][j]==1 && arr[i][j-1]==1 || arr[i][j]==1 && arr[i-1][j]==1 || arr[i][j]==1 && arr[i-1][j-1]==1 || arr[i-1][j]==1 && arr[i][j-1]==1 || arr[i-1][j]==1 && arr[i-1][j-1]==1 || arr[i-1][j-1]==1 && arr[i][j-1]==1)
                ar[i-1][j-1]='S';

            else
                ar[i-1][j-1]='U';
        }
    }

    for (i=0; i<n; ++i)
    {
        for (j=0; j<n; ++j)
            printf("%c", ar[i][j]);

        printf("\n");
    }

    return 0;
}
