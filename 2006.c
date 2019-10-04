#include <stdio.h>

int main(void)

{
    int n, i, count=0;

    scanf("%i", &n);

    int arr[n];

    for (i=0; i<5; ++i)
        scanf("%i", &arr[i]);

    for (i=0; i<5; ++i)
        if (arr[i]==n)
            ++count;

    printf("%i\n", count);

    return 0;
}
