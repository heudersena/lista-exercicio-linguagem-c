#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// DEFININDO AS CONSTANTES
#define INSS 0.08
#define IR_INSS 0.16
#define SALARIO 1500

int main() {
    float salarioBruto, salarioLiquido;

    printf("Digite o sálario bruto:\t");
    scanf("%f", &salarioBruto);

    if (salarioBruto < SALARIO) {
        salarioLiquido = salarioBruto - (salarioBruto * INSS);

    } else {
        salarioLiquido = salarioBruto - (salarioBruto * IR_INSS);
    }

    printf("%.2f", salarioLiquido);
}