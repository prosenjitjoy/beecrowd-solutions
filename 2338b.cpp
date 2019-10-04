#include <stdio.h>
#include <string.h>

int main()
{
    int tst, i, j, l, cndtn = 0;
    char str[1000*2], tmp[15];
    scanf("%d", &tst);
    for(i = 1; i<=tst; i++)
    {
        scanf("%s", str);
        for(j = 0; j < strlen(str) ;)
        {
            for(l = 0; ;l++)
            {
                if(str[j] == '=')
                {
                    tmp[l] = '=';
                    j += 1;
                }
                else if(str[j] == '.' && str[j+1] == '.' && str[j+3] == '.')
                {
                    j += 7;
                    tmp[l] = '\0';
                    cndtn = 1;
                    break;
                }
                else if((str[j] == '.' && str[j+1] == '.' && str[j+2] == '.'))
                {
                    j += 3;
                    tmp[l] = '\0';
                    break;
                }
                else
                {
                    tmp[l] = '.';
                    j += 1;
                }
                if(strlen(str) <= j)
                {
                    tmp[l+1] = '\0';
                    j += 1;
                    break;
                }
            }
            if(strcmp( tmp, "=.===") == 0) printf("a");
            else if(strcmp( tmp, "===.=.=.=") == 0) printf("b");
            else if(strcmp( tmp, "===.=.===.=") == 0) printf("c");
            else if(strcmp( tmp, "===.=.=") == 0) printf("d");
            else if(strcmp( tmp, "=") == 0) printf("e");
            else if(strcmp( tmp, "=.=.===.=") == 0) printf("f");
            else if(strcmp( tmp, "===.===.=") == 0) printf("g");
            else if(strcmp( tmp, "=.=.=.=") == 0) printf("h");
            else if(strcmp( tmp, "=.=") == 0) printf("i");
            else if(strcmp( tmp, "=.===.===.===") == 0) printf("j");
            else if(strcmp( tmp, "===.=.===") == 0) printf("k");
            else if(strcmp( tmp, "=.===.=.=") == 0) printf("l");
            else if(strcmp( tmp, "===.===") == 0) printf("m");
            else if(strcmp( tmp, "===.=") == 0) printf("n");
            else if(strcmp( tmp, "===.===.===") == 0) printf("o");
            else if(strcmp( tmp, "=.===.===.=") == 0) printf("p");
            else if(strcmp( tmp, "===.===.=.===") == 0) printf("q");
            else if(strcmp( tmp, "=.===.=") == 0) printf("r");
            else if(strcmp( tmp, "=.=.=") == 0) printf("s");
            else if(strcmp( tmp, "===") == 0) printf("t");
            else if(strcmp( tmp, "=.=.===") == 0) printf("u");
            else if(strcmp( tmp, "=.=.=.===") == 0) printf("v");
            else if(strcmp( tmp, "=.===.===") == 0) printf("w");
            else if(strcmp( tmp, "===.=.=.===") == 0) printf("x");
            else if(strcmp( tmp, "===.=.===.===") == 0) printf("y");
            else if(strcmp( tmp, "===.===.=.=") == 0) printf("z");
            if(cndtn == 1)
            {
                printf(" ");
                cndtn = 0;
            }
        }
        printf("\n");

    }
    return 0;
}
