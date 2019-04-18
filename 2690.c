#include <stdio.h>

int alphabetic(char c)
{
    if (c>='a' && c<='z' || c>='A' && c<='Z')
        return 0;
    else
        return 1;
}

void decode(char str[])

{
    int i, x=0, y, z;
    char c, ch[500];

    for (i=0; str[i]!=0; ++i)
    {
        if (alphabetic(str[i]))
            continue;
        ch[x++]=str[i];
    }

    ch[x]=0;

    for (i=0; i<12; ++i)
    {
        c=ch[i];

        if (c=='G' || c=='Q' || c=='a' || c=='k' || c=='u')
            printf("0");

        else if (c=='I' || c=='S' || c=='b' || c=='l' || c=='v')
            printf("1");

        else if (c=='E' || c=='O' || c=='Y' || c=='c' || c=='m' || c=='w')
            printf("2");

        else if (c=='F' || c=='P' || c=='Z' || c=='d' || c=='n' || c=='x')
            printf("3");

        else if (c=='J' || c=='T' || c=='e' || c=='o' || c=='y')
            printf("4");

        else if (c=='D' || c=='N' || c=='X' || c=='f' || c=='p' || c=='z')
            printf("5");

        else if (c=='A' || c=='K' || c=='U' || c=='g' || c=='q')
            printf("6");

        else if (c=='C' || c=='M' || c=='W' || c=='h' || c=='r')
            printf("7");

        else if (c=='B' || c=='L' || c=='V' || c=='i' || c=='s')
            printf("8");

        else if (c=='H' || c=='R' || c=='j' || c=='t')
            printf("9");
    }
}

int main(void)

{
    int i, j, n, x, y;
    char str[500];

    scanf("%d", &n);

    for (i=0; i<n; ++i)
    {
        fflush(stdin);
        fgets(str, 500, stdin);
        decode(str);
    }

    return 0;
}
