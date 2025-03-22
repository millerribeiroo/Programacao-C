#include <stdio.h>
    int main(){
        int a = 10;
        int b = 3;
        //conversão de variáveis
        //existe 2 tipos de conversões de variáveis:
        //conversão implícita e conversão explícita
        //conversão implícita é quando o compilador faz a conversão automaticamente
        //conversão explícita é quando o programador faz a conversão
        float c = a / b; //conversão implícita
        printf("c = %.2f\n", c);

        float d = (float) a / b; //conversão explícita
        printf("d = %.2f\n", d);

        return 0;
    }