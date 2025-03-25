#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
        int opcao;
        int numeroSecreto, palpite;

        printf("Menu Principal: \n\n");
        printf("1 - Iniciar Jogo: \n");
        printf("2 - Ver Regras: \n");
        printf("3 - Sair: \n\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                srand(time(0));
                numeroSecreto = rand() % 10;
                printf("Digite o seu palpite de 0 a 9: \n");
                scanf("%d", &palpite);
                    if(palpite == numeroSecreto){
                        printf("Parabéns, você acertou!\n");
                        printf("\nNúmero Secreto: %d\n\n", numeroSecreto);
                    }else{
                        printf("Que pena, você errou!\n");
                        printf("\nNúmero Secreto: %d\n\n", numeroSecreto);
                    }
                break;
            case 2:
                printf("Regras do jogo: \n\n");
                printf("1 - Um número Segredo de 0 a 9 será gerado;\n");
                printf("2 - O jogador deve realizar um palpite;\n");
                printf("3 - O jogador é vencedor se acertar o palpite.\n\n");
                break;
            case 3:
                printf("Saindo do jogo...\n\n");
                break;
            default:
                printf("Opção inválida.\n");
        }

        return 0;
    }