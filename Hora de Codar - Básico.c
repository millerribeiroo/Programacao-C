//Programa para solicitar cadastro dos alunos, 
//com entrada interativa e depois mostrando os 
//alunos cadastrados:

#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite o nome do aluno: \n");
    scanf("%s", nome);

    printf("Digite a idade do aluno: \n");
    scanf("%d", &idade);

    printf("Digite a altura do aluno: \n");
    scanf("%f", &altura);

    printf("Digite a matrícula do aluno: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d\n Idade: %d - Altura: %.2f\n\n", nome, matricula, idade, altura);

}