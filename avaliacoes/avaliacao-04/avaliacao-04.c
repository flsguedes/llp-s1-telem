#include <stdio.h>

void popular_matriz(int tamanho, int matriz[tamanho][tamanho])
{
    int i, j;
    for(i = 0; i < tamanho; i++)
        for(j = 0; j < tamanho; j++)
            matriz[i][j] = i*tamanho + j + 1;
}

void exibir_vetor(int tamanho, int vetor[tamanho])
{
    int i;
    for(i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
}

void exibir_matriz(int tamanho, int matriz[tamanho][tamanho])
{
    int i, j;
    for(i = 0; i < tamanho; i++)
    {
        for(j = 0; j < tamanho; j++)
            printf("%2i ", matriz[i][j]);
        printf("\n");
    }
}

void soma_linha(int n, int slinha[n], int m[n][n])
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        slinha[i] = 0;
        for(j = 0; j < n; j++)
        {
            slinha[i] += m[i][j];
        }
    }
}

int main()
{
    const int TAMANHO = 3;
    int minha_matriz[TAMANHO][TAMANHO], somas[TAMANHO];
    popular_matriz(TAMANHO, minha_matriz);
    soma_linha(TAMANHO, somas, minha_matriz);

    printf("matriz %d x %d:\n", TAMANHO, TAMANHO);
    exibir_matriz(TAMANHO, minha_matriz);

    printf("\nsoma das linhas:\n");
    exibir_vetor(TAMANHO, somas);

    return 0;
}