#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main() {
        int pedra, papel, tesoura, opcao;
        int jogador, computador;

        // Programando pedra, papel e tesoura
        pedra = 1;
        papel = 2;
        tesoura = 3;

        // Menu Principal
        printf("Menu Principal: \n\n");
        printf("1 - Iniciar Jogo: \n");
        printf("2 - Ver Regras: \n");
        printf("3 - Sair: \n\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) 
        {
            case 1: // Jogo Iniciado
                srand(time(0));
                computador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3
                printf("Digite a sua escolha: \n");
                printf("1 - Pedra\n");
                printf("2 - Papel\n");
                printf("3 - Tesoura\n");
                scanf("%d", &jogador);

                if(jogador == computador) {
                    printf("Empate!\n\n");
                    printf("Você e o Computador escolheram: %d\n\n", jogador);
                } else if(jogador == pedra && computador == tesoura) {
                    printf("Você venceu!\n");
                    printf("Você escolheu Pedra e o Computador escolheu Tesoura.\n\n");
                } else if(jogador == papel && computador == pedra) {
                    printf("Você venceu!\n");
                    printf("Você escolheu Papel e o Computador escolheu Pedra.\n\n");
                } else if(jogador == tesoura && computador == papel) {
                    printf("Você venceu!\n");
                    printf("Você escolheu Tesoura e o Computador escolheu Papel.\n\n");
                } else {
                    printf("Você perdeu!\n\n");
                }
                break;
            case 2:
                printf("Regras do jogo: \n\n");
                printf("O jogador deve escolher entre Pedra, Papel e Tesoura;\n\n");
                printf("1 - Pedra vence Tesoura;\n");
                printf("2 - Tesoura vence Papel;\n");
                printf("3 - Papel vence Pedra.\n\n");
                break;
            case 3:
                printf("Saindo do jogo...\n\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

        return 0;
    }