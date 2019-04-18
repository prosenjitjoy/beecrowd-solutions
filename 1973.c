#include <stdio.h>

int main(void)
{
    int n, i, x=0, y=0, sum=0;
    scanf("%i", &n);

    int arr[n];
    for (i=0; i<n; ++i)
    {
        scanf("%i", &arr[i]);
        sum+=arr[i];
    }

    i=0;

    while (1)
    {
        if (arr[i]%2!=0)
        {
            x++;
        }
    }
}
