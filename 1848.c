#include <stdio.h>
#include <string.h>

int value(char str[])
{
    if (strcmp(str, "---")==0)
        return 0;
    else if (strcmp(str, "--*")==0)
        return 1;
    else if (strcmp(str, "-*-")==0)
        return 2;
    else if (strcmp(str, "-**")==0)
        return 3;
    else if (strcmp(str, "*--")==0)
        return 4;
    else if (strcmp(str, "*-*")==0)
        return 5;
    else if (strcmp(str, "**-")==0)
        return 6;
    else if (strcmp(str, "***")==0)
        return 7;
}

int main(void)

{
    char str[1000];
    int i, j, c=0, x, y=0, sum=0;

    while(1)
    {
        gets(str);

        if (strcmp(str, "caw caw")==0)
        {
            ++c;
            printf("%i\n", sum);
            sum=0;
            if (c==3)
                break;
        }
        else
        {
            x=value(str);
            sum+=x;
        }
    }

    return 0;
}
