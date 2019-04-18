#include <stdio.h>

int main(void)

{
    int i, j, arr[3], a[3], temp;

    for (i=0; i<3; ++i)
    {
        scanf("%i", &arr[i]);
        a[i]=arr[i];
    }

    for (i=0; i<3-1; ++i)
    {
        for (j=i+1; j<3; ++j)
        {
            if (arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for (i=0; i<3; ++i)
        printf("%i\n", arr[i]);

    printf("\n");

    for (i=0; i<3; ++i)
        printf("%i\n", a[i]);

    return 0;
}
