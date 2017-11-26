#include <stdio.h>
#include <stdlib.h>

int main() {

    int primeiro_numero, segundo_numero, terceiro_numero;
    int cont = 0;

    printf("Digite três valores:\t\n");
    scanf("%d%d%d", &primeiro_numero, &segundo_numero, &terceiro_numero);

    if ((primeiro_numero > segundo_numero) && (primeiro_numero > terceiro_numero)) {
        cont = primeiro_numero;

    } else if ((segundo_numero > primeiro_numero) && (segundo_numero > terceiro_numero)) {
        cont = segundo_numero;

    } else {
        cont = terceiro_numero;
    }

    printf("%d", cont);

}

