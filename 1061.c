#include <stdio.h>

int main(void)

{
    int d1, h1, m1, s1, d2, h2, m2, s2, d3, h3, m3, s3;
    char str[10], s[10];
    unsigned long long int a, b, c;

    scanf("%s%i",str, &d1);
    scanf("%2d : %i : %i", &h1, &m1, &s1);
    scanf("%s%i",s, &d2);
    scanf("%2d : %i : %i", &h2, &m2, &s2);

    a=d1*86400+h1*3600+m1*60+s1;
    b=d2*86400+h2*3600+m2*60+s2;
    c=b-a;
    d3=c/86400;
    c=c%86400;
    h3=c/3600;
    c=c%3600;
    m3=c/60;
    c=c%60;
    s3=c;

    printf("%i dia(s)\n%i hora(s)\n%i minuto(s)\n%i segundo(s)\n", d3, h3, m3, s3);

    return 0;
}
