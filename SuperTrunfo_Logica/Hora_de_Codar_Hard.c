# include <stdio.h>
# include <stdlib.h>
# include <time.h>

    int main() {
        int numero, chute, opcao;

        printf("Bem vindo ao jogo do 'QUEM É MAIOR?!'.\n");
        printf("Neste jogo, você terá que escolher um número aleatório entre 0 e 100.\n");
        printf("O computador também escolherá um número aleatório entre 0 e 100.\n");
        printf("O objetivo é escolher um critério de disputa e um número para vencer o computador.\n");
        printf("Você terá que escolher entre os critérios: 'Maior número', 'Menor número', 'Empate'.\n");
        printf("Boa sorte!\n\n");

        srand(time(0));
        numero = rand() % 100 + 1;

        printf("Primeiro escolha seu número: ");
        scanf("%d", &chute);

        printf("Agora escolha o critério de disputa:\n");
        printf("1 - Maior número\n");
        printf("2 - Menor número\n");
        printf("3 - Empate\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (chute > numero) {
                    printf("Parabéns! Você venceu!\n");
                    printf("Seu número foi %d e o número do computador foi %d.\n", chute, numero);
                } else {
                    printf("Que pena! Você perdeu!\n");
                    printf("Seu número foi %d e o número do computador foi %d.\n\n", chute, numero);
                }
                break;
            case 2:
                if (chute < numero) {
                    printf("Parabéns! Você venceu!\n");
                    printf("Seu número foi %d e o número do computador foi %d.\n", chute, numero);
                } else {
                    printf("Que pena! Você perdeu!\n");
                    printf("Seu número foi %d e o número do computador foi %d.\n\n", chute, numero);
                }
                break;
            case 3:
                if (chute == numero) {
                    printf("Parabéns! Você venceu!\n");
                    printf("Vocês escolheram o mesmo número: %d.\n\n", chute);
                } else {
                    printf("Que pena! Você perdeu!\n");
                    printf("Seu número foi %d e o número do computador foi %d.\n\n", chute, numero);
                }
                break;
            default:
                printf("Opção inválida!\n");
        }



    return 0;
    }