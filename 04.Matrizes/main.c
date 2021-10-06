/*
programa para exemplificar o uso de matrizes
*/

#include <stdio.h>  // Declarações de bibliotecas utilizadas pelo C
#include <stdlib.h> // Declarações de bibliotecas utilizadas pelo C

#define NLIN 3
#define NCOL 2

int main()
{
    int matriz[NLIN][NCOL]; // matriz de 3 linhas e 2 colunas

    //preenchendo a matriz
    for (int i = 0; i < NLIN; i++)
    {
        for (int j = 0; j < NCOL; j++)
        {
            matriz[i][j] = i * NCOL + j;
            printf("Matrix[%d][%d]: %d\n", i, j, matriz[i][j]);
        }
        printf("\n");
    }

    /* Imprimir a matriz */
    for (int i = 0; i < NLIN; i++)
    {
        for (int j = 0; j < NCOL; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    system("pause"); // faz uma pausa no programa antes de terminar
    return 0;        // Retorna Zero, pois informa ao SO que foi executado sem problemas.
} // fim do programa