#include <stdio.h>
#include <string.h>

int main(void)

{
    char str1[20], str2[20], str3[20];
    int x, y, z;

    scanf("%s %s %s", str1, str2, str3);

    x=strcmp(str1, "vertebrado");

    if (x==0)
    {
        y=strcmp(str2, "ave");

        if (y==0)
        {
            z=strcmp(str3, "carnivoro");

            if (z==0)
                printf("aguia\n");

            else
                printf("pomba\n");
        }

        else
        {
            z=strcmp(str3, "onivoro");

            if (z==0)
                printf("homem\n");

            else
                printf("vaca\n");
        }
    }

    else
    {
        y=strcmp(str2, "inseto");

        if (y==0)
        {
            z=strcmp(str3, "hematofago");

            if (z==0)
                printf("pulga\n");

            else
                printf("lagarta\n");
        }

        else
        {
            z=strcmp(str3, "hematofago");

            if (z==0)
                printf("sanguessuga\n");

            else
                printf("minhoca\n");
        }
    }

    return 0;
}
