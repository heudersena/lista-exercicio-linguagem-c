#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    // caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    float valorInicial, valorFinal, diferenca, cont, resultado;

    printf("Digite um valor inicial em temperatura Celsius:\t");
    scanf("%f", &valorInicial);

    printf("Digite um valor final em temperatura Celsius:\t");
    scanf("%f", &valorFinal);

    printf("\n %.1f Valor inicial:\t", valorInicial);
    printf("\n %.1f Valor final:\n\n", valorFinal);


    for (cont = valorInicial - 1; cont < valorFinal; cont - + valorFinal) {
        resultado = cont++;
        printf("Celcios: ");
        printf("%.1f", resultado = (1.8 * cont) + 32);
        printf("\tFahrenheit\n");

    }


}

