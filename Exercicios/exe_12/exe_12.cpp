/*
Escreva um algoritmo que mostre o resultado da série: 1/100 + 2/99 + 3/98 + 4/97 + ... + 100/1. 
Resultado: 423.93.
*/

#include <stdio.h>

int main() {
    double soma = 0.0;

    for (int i = 1; i <= 100; i++) {
        soma += (double)i / (101 - i);
    }

    printf("O resultado da serie e: %.2lf\n", soma);

    return 0;
}

