#include <stdio.h>
#include <string.h>

int tamanho(char texto[])
{
    int i;
    for(i = strlen(texto) - 2; i >= 0; i--) {
        printf("%2d %c\n", i, texto[i]);
    }
    return strlen(texto) - 1;
}

int main()
{
    char s1[255];
    int size;
    
    printf("Escreva um texto para ser invertido: ");
    fgets(s1, 255, stdin);
    
    size = tamanho(s1);
    printf("Tamanho da string = %d\n", size);
    return 0;
}