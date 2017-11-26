#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor1, valor2, valor3, result;

    printf("Digite três valores de um triangulo:\t\n");
    scanf("%d%d%d", &valor1, &valor2, &valor3);

    result = (valor1 + valor2 + valor3) / 3;
    if (result % 3) {
        printf("Pode forma um triangulo");
    } else {
        printf("Não pode forma um triangulo");
    }

}

