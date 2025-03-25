#include <stdio.h>

int main() {
    int idade = 19;
    int resultado;
    int temperatura = 30;
    int num1 = 40, num2 = 20;
    

    // Operadores Ternários
    // Uma forma compacta de fazer um if else
    // Sintaxe: condição ? valor_se_verdadeiro : valor_se_falso

    resultado = idade >= 18 ? 1 : 0;
    
    if (resultado == 1) {
        printf("Maior de idade.\n\n");
    } else {
        printf("Menor de idade.\n\n");
    }

    temperatura >= 25 ? 1 : 0;
    if(temperatura == 1) {
        printf("Está quente.\n\n");
    } else {
        printf("Está frio.\n\n");
    }

    int maior;
    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O maior número é: %d\n\n", maior);

    return 0;
}