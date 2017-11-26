#include <stdio.h>
#include <stdlib.h>

int main() {
    char sexo;

    printf("Digite [M] para masculino e [F] para femenino:\t");
    scanf("%s", &sexo);

    switch (sexo) {
        case 'M':
            printf("O sexo é valido");
            break;

        case 'm':
            printf("O sexo é valido");
            break;
        case 'F':
            printf("O sexo é valido");
            break;
        case 'f':
            printf("O sexo é valido");
            break;

        default:
            printf("Sexo invalido!");
            break;

    }
}

