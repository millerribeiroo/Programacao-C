#include <stdio.h>

    int main(){
        int idade;

        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        //Criança < 12 anos
        //Adolescente >= 12 e < 18 anos
        //Adulto >= 18 e < 60 anos
        //Idoso >= 60 anos

        // Estruturas de decisão encadeadas
        if (idade < 12){
            printf("Você é criança. \n\n");
        } else if (idade >= 12 && idade < 18){
            printf("Você é adolescente.\n\n");
        } else if (idade >= 18 && idade < 60){
            printf("Você é adulto.\n\n");
        } else {
            printf("Você é idoso.\n\n");
        }


        return (0);
    }