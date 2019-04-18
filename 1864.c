#include <stdio.h>

int main(void)

{
    char str[]="LIFE IS NOT A PROBLEM TO BE SOLVED", str1[100];
    int i, j, n;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
        str1[i]=str[i];

    str1[i]=0;

    puts(str1);
    printf("\n");

    return 0;
}
