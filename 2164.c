#include <stdio.h>
#include <math.h>

int main(void)

{
    int n;
    double x, y, z;

    scanf("%i", &n);

    x=pow(((sqrt(5.0)+1)/2.0), n);
    y=pow(((sqrt(5.0)-1)/2.0), n);

    z=(x-y)/sqrt(5);

    printf("%.1lf\n", x);

    return 0;
}
