#include <stdio.h>

int main(void)
{
    int n;
    double ans=0.0;

    scanf("%i", &n);

    while (n)
    {
        ans+=2.0;
        ans=1.0/ans;
        --n;
    }

    ans+=1.0;

    printf("%.10lf\n", ans);
    return 0;
}
