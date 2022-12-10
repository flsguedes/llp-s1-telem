// Criar um programa que receba dados via teclado e grave em um arquivo.

#include <stdio.h>
#define Tamanho 100

int main()
{
    char texto[Tamanho];
    FILE* fp;

    printf("Escreva um nome para o arquivo.\n");
    fgets(texto, Tamanho, stdin);

    if((fp = fopen("arquivo.txt", "w"))==NULL)
    {
        printf("Não é possível abrir arquivo.\n");
        exit(1);
    }

    fputs(texto, fp);
    fclose(fp);

    return 0;
}