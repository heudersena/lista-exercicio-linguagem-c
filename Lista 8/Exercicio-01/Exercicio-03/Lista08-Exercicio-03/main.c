#include <stdio.h>
#include <stdlib.h>
/*
 Construa um programa que leia um número inteiro e imprima a informação se este
 número​é ou​não divisível por​5. Dica:​Utilize​o operador​% (resto de​divisão
 inteira). 
 */
int main() {
    int numero;
    
    printf("Por favor, digite um numero inteiro:\t");
    scanf("%d",&numero);
    
    if(numero % 5 == 0)
    {
        printf("O numero é divisivel por 5:\t%d",numero);
    }else
    {
        printf("O numero não é divisivel por 5:\t%d",numero);
    }
    
    
    
}

