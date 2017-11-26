#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// DEFININDO AS CONSTANTES
#define CLASSE_A 0,10
#define CLASSE_B 0,15
#define CLASSE_C 0,20

int main() {
    setlocale(LC_ALL, "Portuguese");
    char classe;
    float salario;
    printf("Digite a clase do funcionário:\t");
    scanf("%c", &classe);

    printf("\nDigite o seu salario:\t");
    scanf("%f", &salario);

    switch (classe) {
        case 'A':
            salario = salario + (salario * 0, 10);
            printf("\nSalario com aumento de 10 por cento é:\t%.2f", salario);
            break;
        case 'a':
            salario = salario + (salario * 0, 10);
            printf("\nSalario com aumento de 10 por cento é:\t%.2f", salario);
            break;
        case 'B':
            salario = salario + (salario * 0, 15);
            printf("\nSalario com aumento de 15 por cento é:\t%.2f", salario);
            break;
        case 'b':
            salario = salario + (salario * 0, 15);
            printf("\nSalario com aumento de 15 por cento é:\t%.2f", salario);
            break;
        case 'C':
            salario = salario + (salario * 0, 20);
            printf("\nSalario com aumento de 20 por cento é:\t%.2f", salario);
            break;
        case 'c':
            salario = salario + (salario * 0, 20);
            printf("\nSalario com aumento de 20 por cento é:\t%.2f", salario);
            break;
    }




}

