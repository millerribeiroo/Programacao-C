#include <stdio.h>

#define l 3
#define c 3

int main() {
    int matriz[l][c] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matriz[i][j] > 5)
            {
                matriz[i][j] = -matriz[i][j]; // Se o elemento for maior que 5, ele se torna negativo
            }

            printf("%2d ", matriz[i][j]); // Imprime o elemento da matriz
        }
        printf("\n");
    }

    // Outro exemplo:  
    // Contagem Condicional de uma Matriz.


    int imparcount = 0, parcount = 0;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                parcount++;
            }
            else
            {
                imparcount++;
            }
        }
    }
    printf("Quantidade de pares: %d\n", parcount);
    printf("Quantidade de impares: %d\n", imparcount);

    // Outro exemplo:
    // Subistituição Condicional de Elementos de uma Matriz.

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matriz[i][j] % 3 == 0)
            {
                matriz[i][j] = -1;
            }
            printf("%2d ", matriz[i][j]); // Imprime o elemento da matriz
        }
        printf("\n");
    }

    // Outro exemplo:
    // Busca Condicional em uma Matriz.

    int busca = 5;
    int encontrado = 0;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matriz[i][j] == busca)
            {
                printf("Elemento %d encontrado na posicao [%d][%d]\n", busca, i, j);
                encontrado = 1;
                break; // Para de buscar se o elemento for encontrado
            }
        }
        if (encontrado) break; // Para de buscar se o elemento for encontrado
    }
    if (!encontrado)
    {
        printf("Elemento %d nao encontrado na matriz\n", busca);
    }
    
    
    return 0; 
}