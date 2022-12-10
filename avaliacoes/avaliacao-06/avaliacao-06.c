#include <stdio.h>
#include <math.h>
#define Tamanho 10000

int eh_primo(int numero)
{
    int i;
    int raiz = sqrt(numero);
    if(numero < 2) return 0;
    if(numero == 2) return 1;
    if(numero % 2 == 0) return 0;
    for (i = 3; i <= raiz; i += 2)
    { 
        if(numero % i == 0) return 0;
    }
    return 1;
}

int main() {
    int i;
    int contador = 0;
    int primos [Tamanho];
    FILE* fp;
    
    for(i = 0; contador <= Tamanho; i++)
    {
        if(eh_primo(i))
        {
            primos[contador]=i;
            contador++;
        }
    }

    if((fp = fopen("arquivo.txt", "w"))==NULL)
    {
        printf("Não é possível abrir o arquivo.\n");
        exit(1);
    }

    for (i = 0; i < Tamanho; i++)
    {
        fprintf(fp, "%d\n", primos[i]);
    }

    fclose(fp);

    return 0;
}