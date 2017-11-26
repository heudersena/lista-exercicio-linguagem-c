#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    // caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    int fatorial,
            resposta = 1;

    printf("Digite um numero inteiro:\t");
    scanf("%i", &fatorial);

    for (; fatorial >= 1; --fatorial) {
        resposta = resposta * fatorial;
    }
    printf("\n\nO fatorial é : %i\n", resposta);
    return 0;
}

