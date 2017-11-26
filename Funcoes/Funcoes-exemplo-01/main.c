#include <stdio.h>
#include <stdlib.h>
float calcular_INSS(float);

void main(void) {
    float salarioBruto, salarioLiquido, descontoINSS, descontoIR;
    char opcao;

    printf("\n\t\tCALCULO DE SALARIO LIQUIDO\t\t\n");
    printf("Deseja continuar? ...\n");
    printf("S = sim;\tN=nao\n");

    scanf("\n%c", &opcao);

    while ((opcao == 'S') || (opcao == 's')) {

        printf("\nDigite o salario bruto:\t");
        scanf("\n %f", &salarioBruto);
        descontoINSS = calcular_INSS(salarioBruto);

    }
}
// função é uma forma de dividir nosso codigo em partes menores
// Sempre que tiver um array terá que ter um indice.
// array é uma estrutura de dados definido pelo programador, para armazenar um conjunto omogenito.
// CRIAR AS FUNÇÕES AṔOS FEIXAR O MAIN

float calcular_INSS(float salario) {
    float desconto;
    desconto = salario * 0.14;
    return desconto;
}