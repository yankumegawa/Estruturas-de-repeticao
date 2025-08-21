/*
Escreva um algoritmo que escreva os 10 primeiros termos da série 1, 3, 9, 27, ...
*/

#include <stdio.h>

int main() {
    int termo = 1; 

    printf("Os 10 primeiros termos da serie:\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d ", termo);
        termo = termo * 3;  
    }

    printf("\n");
    return 0;
}

