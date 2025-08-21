//Escreva um algoritmo que some os numeros fornecidos pelo usuário até que o número lido 
//seja igual a zero. Ao final, mostre o resultado da soma

#include <stdio.h>

int main() {
    float numero, somaTotal = 0;
    
    printf("Digite os numeros para somar:\n");
    
    do {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        somaTotal += numero;
    } while (numero != 0);
    
    printf("A soma total e: %.2f\n", somaTotal);
    
    return 0;
}
