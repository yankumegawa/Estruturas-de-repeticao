/*
Escreva um algoritmo que mostre o resultado dos primeiros 20 termos da série: 1/1 + 3/2 + 5/4 + 7/8 + 
... Resultado: 6.00.
*/

#include <stdio.h>

int main() {
    double soma = 0.0;
    int termos = 20;
    int numerador = 1;
    int denominador = 1;

    for (int i = 1; i <= termos; i++) {
        soma += (double)numerador / denominador;
        numerador += 2;      
        denominador *= 2;    
    }

    printf("O resultado da serie e: %.2lf\n", soma);

    return 0;
}

