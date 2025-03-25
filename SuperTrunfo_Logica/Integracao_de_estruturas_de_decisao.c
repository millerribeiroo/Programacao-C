#include <stdio.h>

    int main(){
        int opcao;
        float nota1, nota2, media;

        printf("Digite a opção desejada: \n\n");
        printf("1 - Calcular média.\n");
        printf("2 - Determinar Status.\n");
        printf("3 - Sair.\n\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite a primeira nota: ");
                scanf("%f", &nota1);
                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);
                media = (nota1 + nota2) / 2;
                
                //Testar a condição se a nota for >= 0 e <= 10
                (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) ?
                    printf("A média é: %.2f\n\n", media)
                :
                    printf("Nota inválida!\n\n");

                break;
            case 2:
                printf("Digite a primeira nota: ");
                scanf("%f", &nota1);
                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);
                media = (nota1 + nota2) / 2;
                media >= 7 ? 
                    printf("Parabéns, você está aprovado! \nSua média foi: %.2f\n\n", media)
                :
                    printf("Reprovado. \nSua média foi: %.2f\n\n", media);
                
                break;
            case 3:
                printf("Saindo...\n\n");
                break;
            default:
                printf("Opção inválida!\n\n");
        }        

        return 0;
    }