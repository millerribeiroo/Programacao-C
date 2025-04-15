#include <stdio.h>
// função recursiva para imprmir números de n até 1
void recursiveloop(int numero) {
    if (numero > 0) {
        printf("%d\n", numero); //imprime o valor atual de n
        recursiveloop(numero - 1); // chama a si mesma com n - 1
    }
}

int main() {
    int quantidade = 10;
    printf("Contagem Regressiva: ");
    recursiveloop(quantidade); // chama a função recursiva
    return 0; 
}