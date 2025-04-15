#include <stdio.h>

int main() {

    int w = 0;
    int dw;
    int f;
    int i;

    printf("Olá, seja bem-vindo ao programa!\n");
    printf("Este programa faz uso de operadores de repetição.\n\n");

    printf("Abaixo estão os números pares de 0 a 9 usando while:\n");
    while(w <= 9) {
        if (w % 2 == 0) {
            printf("\n%d", w);
        }

        w++;

    }

    printf("\n\nAgora vamos usar a estrutura For de repetição:\n");
    printf("insira um número de 1 a 9: ");
    scanf("%d", &f);

    for (i = 0; i <= 10; i++)
        {
            printf("\n%d x %d = %d", f, i, f * i);
            if (i == 10) {
                printf("\n\nVocê saiu do loop for, continuando o programa... \n");
            }
        }
    

    printf("\nAgora vamos usar o do-while, primeiro uma instrução de repetição e depois uma condição.\n");
    do {
        printf("\nContinue preso no looping digitando um número ímpar ou digite um número par para sair do programa... \n");
        scanf("%d", &dw);

        if (dw % 2 == 0) {
            printf("\nVocê digitou um número par: %d\n", dw);
        } else {
            printf("\nVocê digitou um número ímpar: %d\n", dw);
        }

    } while(dw % 2 != 0);

    printf("\n\nVocê saiu do programa com o número par, saindo do programa... \n\n");

    return 0;
}