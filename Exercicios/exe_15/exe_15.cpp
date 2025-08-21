/*
Escreva um algoritmo que escreva os 10 primeiros números da sequência de Fibonacci. Resultado: 1, 
1, 2, 3, 5, 8, 13, 21, 34, 55.
*/

#include <stdio.h>

int main() {
    int termos = 10;
    int a = 1, b = 1, c;

    printf("Sequencia de Fibonacci (%d primeiros termos):\n", termos);

    printf("%d, %d", a, b); 

    for (int i = 3; i <= termos; i++) {
        c = a + b;   
        printf(", %d", c);
        a = b;       
        b = c;       
    }

    printf("\n");

    return 0;
}

