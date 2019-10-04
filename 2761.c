#include <stdio.h>

int main(){

    int inteiro;
    float precSimples;
    char caractere;
    char frase[60];

    while (scanf("%d %f %c %[^\n]s",&inteiro, &precSimples, &caractere, frase) != EOF)

    {



    printf("%d%.6f%c",inteiro,precSimples,caractere);
    puts(frase);
    printf("%d        %.6f        %c        ",inteiro,precSimples,caractere);
    puts(frase);
    printf("%d          %.6f          %c          ",inteiro,precSimples,caractere);
    puts(frase);
    }
    return 0;
}
