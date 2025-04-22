#include <stdio.h>

int main() {
    int vetor[5];
    // loops com vetores:
    for (int i = 0; i < 5; i++) {
       vetor[i] = i * 2;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
    
    // loops com matrizes:
    int matriz[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * j;
            printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
        printf("\n");
    }

    //Calculando soma de elementos de vetor:
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }
    printf("Soma dos elementos do vetor: %d\n", soma);

    //Calculando soma de matrizes:
    int matrizSoma[3][3];
    int matriz2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizSoma[i][j] = matriz[i][j] + matriz2[i][j];
            printf("MatrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}