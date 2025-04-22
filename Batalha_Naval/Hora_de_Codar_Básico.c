#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    int i, j;
    int matriz[LINHAS][COLUNAS];
    int soma = 0;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int i = 0; i < COLUNAS; i++)
        {
            soma++;
            matriz[i][j] = soma;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    

}