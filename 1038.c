#include <stdio.h>

int main(void)

{
    int x, y;
    double z;

    scanf("%i %i", &x, &y);

    switch (x)
    {
    case 1:
        z=4.0*y;
        break;

    case 2:
        z=4.5*y;
        break;

    case 3:
        z=5.0*y;
        break;

    case 4:
        z=2.0*y;
        break;

    case 5:
        z=1.5*y;
        break;
    }

    printf("Total: R$ %.2lf\n", z);

    return 0;
}
