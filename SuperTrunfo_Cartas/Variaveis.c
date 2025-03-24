#include <stdio.h>

int main(){
    int idade = 30;
    int quantidade = 1;
    float altura = 1.75;
    char letra = 'A';
    char nome[6] = "Fulano";
    /*int = valor inteiro;
    float = ponto flutuante, números com casas decimais;
    double = ponto flutuante também, porém com maiores casas decimais;
    char = letras[número de caracteres];
    string = conjunto de caracteres;
    bool = verdadeiro oufalso;
    void = vazio;
    */
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altu ra);
    printf("Letra: %c\n", letra);
    
    return 0;

}