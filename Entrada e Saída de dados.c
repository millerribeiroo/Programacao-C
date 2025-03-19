#include <stdio.h>

int main() {
    int idade;
    float altura;
    char genero[20];
    char nome[20];

    //Sintaxe padrão printf
    //printf("texto com formatação, variavel1, variavel2, ...");
    printf("Digite seu nome:\n");
    //Sintaxe padrão scanf
    //scanf("tipo de dado", &variavel);
    scanf("%s", nome);

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Altura:\n");
    scanf("%f", &altura);

    printf("Gênero:\n");
    scanf(" %s", genero);

    printf("%s, você tem %d anos, %.2f de altura e é do gênero %s .\n\n", nome, idade, altura, genero);

    /*
    %d: Imprime um inteiro no formato decimal;
    %i: Equivale a %d;
    %f: Imprime um número de ponto flutuante no formato padrão;
    %e: Imprime um número de ponto flutuante na notação científica;
    %c: Imprime um caractere;
    %s: Imprime uma  cadeia (string) de caracteres;
    */

    return(0);
}