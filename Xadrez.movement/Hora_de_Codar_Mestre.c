#include <stdio.h>

void recursivo(int numero) {
    if (numero > 0) {
        recursivo(numero - 1);
        printf("%d ", numero);
    }
}

int main() {
    int qunatidade = 10;
    printf("Contagem regressiva: ");
    recursivo(qunatidade);

return 0;
}