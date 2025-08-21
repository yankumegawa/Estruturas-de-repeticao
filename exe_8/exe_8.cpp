#include <stdio.h>

int main() {
    int numero, contador;
    
    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);
    
    printf("\nTabuada do %d:\n", numero);
  
    for(contador = 1; contador <= 10; contador = contador + 1) {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
    }
    
    return 0;
}