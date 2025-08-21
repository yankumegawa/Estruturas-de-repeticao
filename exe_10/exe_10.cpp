#include <stdio.h>

int main() {
    int numero, contador;
    long fatorial = 1;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: negativo nao existe.\n");
    } else {

        for(contador = 1; contador <= numero; contador = contador + 1) {
            fatorial = fatorial * contador;
        }
        
        printf("O fatorial de %d eh: %ld\n", numero, fatorial);
    }
    
    return 0;
}