#include <stdio.h>
#include <stdbool.h>

bool primef(int n)

{
    int i;
    bool prime=true;
    if (n<=1)
        return prime=false;
    else
    {
    for (i=2; i<=n/2; ++i)
    {
        if (n%i==0)
        {
            prime=false;
            break;
        }
    }
    }

    return prime;
}

int main(void)

{
    int n, i, digit;
    bool flag=true;

    while (scanf("%i", &n)!= EOF)
    {
    flag=true;
    if (primef(n)==false)
        printf("Nada\n");

    else
    {
        while (n!=0 && flag)
        {
            digit=n%10;
            if (primef(digit))
                flag=true;
            else
                flag=false;

            n/=10;
        }

        if (flag)
            printf("Super\n");

        else
            printf("Primo\n");
    }
    }
    return 0;
}
