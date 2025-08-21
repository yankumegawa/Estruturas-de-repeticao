/*
A defini��o de "amplitude" em Estat�stica � dada pela grandeza num�rica resultante da diferen�a entre 
o maior valor e o menor valor do conjunto de valores de uma amostra. Escreva um algoritmo que leia 
uma sequencia de n�meros reais positivos terminada em zero (o n�mero zero n�o deve ser 
processado pois serve para marcar o final da entrada de dados). O algoritmo deve determinar e 
mostrar o valor da amplitude estat�stica dos valores. Exemplo: para a sequencia 4.5, 5.2, 1.7, 1.3, 1.9, 
2.2, 8.3, 9.1, 5.4 e 0, teremos o resultado de 7.8 como amplitude.
*/

#include <stdio.h>

int main() {
    double num;
    double maior = 0;
    double menor = 0;
    int primeiro = 1; 

    printf("Digite numeros positivos (0 para terminar):\n");

    do {
        scanf("%lf", &num);

        if (num != 0) {
            if (primeiro) {
                
                maior = num;
                menor = num;
                primeiro = 0;
            } else {
                if (num > maior) {
                    maior = num;
                }
                if (num < menor) {
                    menor = num;
                }
            }
        }

    } while (num != 0);

    if (primeiro) {
        printf("Nenhum numero digitado.\n");
    } else {
        double amplitude = maior - menor;
        printf("A amplitude dos numeros digitados e: %.2lf\n", amplitude);
    }

    return 0;
}

