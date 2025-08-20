/* Escreva um algoritmo que some os números fornecidos pelo usuário até que o número lido seja um
número negativo. Ao final, mostre o resultado da soma */
#include <stdio.h>

int main() {
    float numero, soma = 0;
    
    printf("Digite números para somar:\n");
    
    printf("Digite um número: ");
    scanf("%f", &numero);
    
    while (numero >= 0) {
        soma += numero;
        printf("Digite um número: ");
        scanf("%f", &numero);
    }
    
    printf("A soma total dos números E: %.2f\n", soma);
    
    return 0;
}