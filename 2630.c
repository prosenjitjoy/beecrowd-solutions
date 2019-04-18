#include <stdio.h>
#include <string.h>

int main(void)

{
    int n, i, j, a[3];
    char str[50];

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%s", str);

        for (j=0; j<3; ++j)
            scanf("%i", &a[j]);

        if (strcmp(str, "min")==0)
        {
            int min=a[0];

            for (j=0; j<3; ++j)
            {
                if (a[j]<min)
                    min=a[j];
            }

            printf("Caso #%i: %i\n", i+1, min);
        }

        else if (strcmp(str, "max")==0)
        {
            int max=a[0];

            for (j=0; j<3; ++j)
            {
                if (a[j]>max)
                    max=a[j];
            }

            printf("Caso #%i: %i\n", i+1, max);
        }

        else if (strcmp(str, "mean")==0)
        {
            int sum=0;

            for (j=0; j<3; ++j)
                sum+=a[j];

            printf("Caso #%i: %i\n", i+1, sum/3);
        }

        else if (strcmp(str, "eye")==0)
        {
            int eye;

            eye=(a[0]*.3)+(a[1]*.59)+(a[2]*.11);

            printf("Caso #%i: %i\n", i+1, eye);
        }
    }

    return 0;
}
