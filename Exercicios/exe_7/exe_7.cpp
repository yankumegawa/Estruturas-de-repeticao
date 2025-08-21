/* Escreva um algoritmo que some os numeros fornecidos pelo usuario ate que o numero lido seja um
numero negativo. Ao final, mostre o resultado da soma */
#include <stdio.h>

int main() {
    float numero, soma = 0;
    
    printf("Digite numeros para somar:\n");
    
    printf("Digite um numero: ");
    scanf("%f", &numero);
    
    while (numero >= 0) {
        soma += numero;
        printf("Digite um numero: ");
        scanf("%f", &numero);
    }
    
    printf("A soma total dos numeros E: %.2f\n", soma);
    
    return 0;
}
