#include <stdio.h>
    int main(){

        int a = 5, b = -10, c = 1;

        // Operadores lógicos
        // && - AND - se as duas variáveis forem verdadeiras
        // || - OR - se uma das variáveis for verdadeira
        // ! - NOT - inverte o valor da variável

        if (a > 0 || b > 0) {
            printf("Pelo menos um dos números é positivo.\n\n");
        } else {
            printf("Os dois números são negativos.\n\n");
        }

        if (!c){
            printf("O valor de C é zero.\n\n");
        } else {
            printf("O valor de C é diferente de zero.\n\n");
        }

        // Precedência dos operadores
        // 1º - ()   []
        // 2º - !   ~   ++   --
        // 3º - *   /   %
        // 4º - +   -
        // 5º - <   <=   >   >=
        // 6º - ==   !=
        // 7º - &&
        // 8º - ||
        // 9º - =   +=   -=   *=   /=   %=
        // 10º - ,

        if (a > 0 && b < 0 || c) {
            printf("A expressão é verdadeira.\n\n");
        } else {
            printf("A expressão é falsa.\n\n");
        }

        return (0);
    }