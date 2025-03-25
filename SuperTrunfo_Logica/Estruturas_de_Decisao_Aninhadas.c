#include <stdio.h>

    int main() {
        int idade, dependentes;
        float renda;
    

        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        printf("Digite a sua renda: ");
        scanf("%f", &renda);

        printf("Digite o número de dependentes: ");
        scanf("%d", &dependentes);

        if (idade <= 18 || idade >= 65) {
            if (renda <= 2000) {
                if (dependentes > 2) {
                    printf("Você tem direito ao benefício.\n");
                } else {
                    printf("Você não tem direito ao benefício devido o número de dependentes\n");
                }
                printf("Você tem direito ao benefício.\n");
            } else {
                printf("Você não tem renda necessária para o benefício.\n");
            }
        } else {
            printf("Você não tem direito ao benefício.\n\n");
        }


        return 0;
    }