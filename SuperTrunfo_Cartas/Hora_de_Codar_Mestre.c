#include <stdio.h>

int main() {
    //Declara variáveis Produto, Unsigned int estoque, double valor unitário, double valor total
    //Unsigned int quantidade mínima.

    char produtoA[30] = "Geladeira";
    char produtoB[30] = "Computador";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorUnitarioA = 10.50;
    float valorUnitarioB = 20.40;

    unsigned int quantidadeMinimaA = 500;
    unsigned int quantidadeMinimaB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;
    
    //Informações dos Produtos
    printf(" %s tem no estoque %u unidades e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorUnitarioA);
    printf(" %s tem no estoque %u unidades e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorUnitarioB);

    //Comparações com o valores totais
    valorTotalA = estoqueA * valorUnitarioA;
    valorTotalB = estoqueB * valorUnitarioB;

    printf("O valor total do produto %s em estoque é R$%.2f\n", produtoA, valorTotalA);
    printf("O valor total do produto %s em estoque é R$%.2f\n", produtoB, valorTotalB);

    return 0;
}