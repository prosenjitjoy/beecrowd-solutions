#include <stdio.h>

int main(void)

{
    int a, b;
    double ans;

    while (1){scanf("%d %d", &a, &b);

    ans=a/(double)b;

    printf("%.2lf\n", ans);}

    return 0;
}
