/*
Meu primeiro programa em C
criacao de vetores
*/

#include <stdio.h>  // Declarações de bibliotecas utilizadas pelo C
#include <stdlib.h> // Declarações de bibliotecas utilizadas pelo C

#define N 30

int main()
{
    int vetorA[N];   // vetor de N posições
    int escalar = 3; // valor de um escalar

    int vetorResult[N];

    //preenchendo o vetor
    for (int i = 0; i < N; i++)
    {
        vetorA[i] = i;
        printf("Valor do Vetor: %d\n", vetorA[i]); // comando para imprimir o valor atribuido ao vetor
    }

    //Realizando o produto escalar de um vetor de N posicoes
    for (size_t i = 0; i < N; i++)
    {
        /* code */
        vetorResult[i] = vetorA[i] * escalar;
        printf("Valor do Vetor Resultado: %d\n", vetorResult[i]); // comando para imprimir o valor atribuido ao vetor
    }
    

    system("pause"); // faz uma pausa no programa antes de terminar
    return 0;        // Retorna Zero, pois informa ao SO que foi executado sem problemas.
} // fim do programa