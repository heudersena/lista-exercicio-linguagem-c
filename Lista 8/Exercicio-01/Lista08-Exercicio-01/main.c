#include <stdio.h>
#include <stdlib.h>

int main() {
    int matricula;
    float nota1, nota2, resultado;

    printf("Qual a matricula do aluno: ");
    scanf("%i", &matricula);

    printf("Digite a primeira nota:");
    scanf("%f",&nota1);

    printf("Digite a segunda nota:");
    scanf("%f",&nota2);

    resultado = (nota1 + nota2) / 2;

    if (resultado > 60) {
        printf("Aluno aprovado :) %.2f",resultado);
    } else {
        printf("Aluno reprovado :( %.2f",resultado);
    }


}

