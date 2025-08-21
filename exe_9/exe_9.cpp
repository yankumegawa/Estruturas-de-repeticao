#include <stdio.h>

int main() {
    int numero, comeco, fim, contador;
    
    printf("Digite o numero para ver a tabuada: ");
    scanf("%d", &numero);
    
    printf("Digite o valor inicial: ");
    scanf("%d", &comeco);
    
    printf("Digite o valor final: ");
    scanf("%d", &fim);
    
    printf("\nTabuada do %d (de %d a %d):\n", numero, comeco, fim);
    printf("----------------------------\n");
    
    for(contador = comeco; contador <= fim; contador = contador + 1) {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
    }
    
    return 0;
}