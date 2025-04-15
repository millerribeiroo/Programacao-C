#include <stdio.h>

int main() {

    int index;

    char * nomesAlunos[5][3] = {
        {"Lucas", "Pt: 30", "Mat: 90"},
        {"Pedro", "Pt: 60", "Mat: 60"},
        {"Maria", "Pt: 90", "Mat: 30"},
        {"Ana", "Pt: 90", "Mat: 100"},
        {"Joao", "Pt: 40", "Mat: 80"}
    };
        
    printf("Digite o número do aluno que queira ver as notas: \n");
    printf("0 - Lucas\n");
    printf("1 - Pedro\n");
    printf("2 - Maria\n");
    printf("3 - Ana\n");
    printf("4 - João\n");
    printf("Digite o número do aluno: ");
    scanf("%d", &index);

    printf("As notas do %s são: %s e %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);


    return 0;
}