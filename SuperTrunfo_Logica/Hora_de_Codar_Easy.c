#include <stdio.h>

    int main(){
        float temperatura, umidade;
        unsigned int estoque;

        printf("Digite a temperatura: \n");
        scanf("%f", &temperatura);
        printf("Digite a umidade: \n");
        scanf("%f", &umidade);
        printf("Digite quantas unidades do produto em estoque: \n");
        scanf("%u", &estoque);

        // Verifica se a temperatura está acima de 30 graus
        if (temperatura > 30) {
            printf("Temperatura acima do recomendado.\n\n");
        } else {
            printf("Temperatura dentro do recomendado.\n\n");
        }

        // Verifica se a umidade está acima de 70%
        if (umidade > 70) {
            printf("Umidade acima do recomendado.\n\n");
        } else {
            printf("Umidade dentro do recomendado.\n\n");
        }

        // Verifica se o estoque está abaixo de 20 unidades
        if (estoque < 20) {
            printf("Estoque baixo.\n\n\n");
        } else {
            printf("Estoque dentro da quantidade segura de operação.\n\n\n");
        }


        return (0);
    }