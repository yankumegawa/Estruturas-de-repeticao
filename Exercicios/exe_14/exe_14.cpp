/*
 algoritmo que mostre o resultado dos primeiros 50 termos da série: 1000/1 - 997/2 + 994/3 - 991/4 + ... Resultado: 685.30.
*/

#include <stdio.h>

int main() {
    double soma = 0.0;
    int termos = 50;
    int numerador = 1000;
    int denominador = 1;

    for (int i = 1; i <= termos; i++) {
        double termo = (double)numerador / denominador;

        if (i % 2 == 0) {  
            soma -= termo;  
        } else {
            soma += termo;   
        }

        numerador -= 3;   
        denominador++;    
    }

    printf("Resultado da serie: %.2lf\n", soma);

    return 0;
}

