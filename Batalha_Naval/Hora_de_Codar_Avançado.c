#include <stdio.h>

#define l 15
#define c 15

int main (){
    int matriz[l][c];
    int soma = 1;
    int target = 111;
    int found = 0;

    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            matriz[i][j] = soma;
            soma++;
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matriz[i][j] == target)
            {
                printf("\n\nElemento encontrado na linha %d, coluna %d\n", i + 1, j + 1);
                found = 1;
                break; // Para sair do loop interno
            }
        }
        if (found) break;
   
    }
    if (found){

    }

    return 0;
}