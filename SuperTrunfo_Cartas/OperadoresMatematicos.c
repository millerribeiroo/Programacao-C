// treinando com operadores matematicos

#include <stdio.h>

int main(){
    //Declarando variaveis
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    //Entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    //Soma (+)
    //Subtração (-)
    //Multiplicação (*)
    //Divisão (/)

    //operação soma
    soma = numero1 + numero2;

    //operação subtração
    subtracao = numero1 - numero2;
 
    //operação multiplicação
    multiplicacao = numero1 * numero2;

    //operação divisão 
    divisao = numero1 / numero2;
    
    //Saida de dados
    printf("\n\nA soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %d\n", subtracao);
    printf("A multiplicação dos números é: %d\n", multiplicacao);
    printf("A divisão dos números é: %d\n\n\n", divisao);

    //Operadores de atribuição
    //Simples (=)
    //Soma (+=)
    //Subtração (-=)
    //Multiplicação (*=)
    //Divisão (/=)
    
    soma += numero1;
    printf("A soma mais o número 1 é: %d\n", soma);

    subtracao -= numero1;
    printf("A subtração menos o número 1 é: %d\n", subtracao);

    multiplicacao *= numero1;
    printf("A multiplicação vezes o número 1 é: %d\n", multiplicacao);

    divisao /= numero1;
    printf("A divisão dividido pelo número 1 é: %d\n", divisao);

    //Operadores de incremento e decremento
    //Incremento (++)
    //Decremento (--)
    //Aumenta ou diminui o valor de 1 variável em 1
        //incremento e decremento antes ou após a variável:
        //pré-incremento (++variavel)
        //pós-incremento (variavel++)

        //pré-decremento (--variavel)
        //pós-decremento (variavel--)

    soma++;
    printf("\n\nA soma mais 1 é: %d\n", soma);

    subtracao--;
    printf("A subtração menos 1 é: %d\n", subtracao);

    ++multiplicacao;
    printf("A multiplicação mais 1 é: %d\n", multiplicacao);

    --divisao;
    printf("A divisão menos 1 é: %d\n\n", divisao);


    return 0;
    
 }