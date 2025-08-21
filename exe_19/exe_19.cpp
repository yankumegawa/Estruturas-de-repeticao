/*
Escreva um algoritmo que apresente na tela o seguinte menu:
 # MENU PRINCIPAL #
 [1] Digitar um n�mero par
 [2] Digitar um n�mero �mpar
 [3] Sair
 Caso o usu�rio escolha a op��o 1, ele deve digitar um n�mero par para voltar ao menu. O mesmo 
deve ser feito na op��o 2, mas para um n�mero �mpar. Caso o usu�rio escolha a op��o 3, o algoritmo 
deve apresentar a quantidade de n�meros pares digitados na op��o 1, a quantidade de n�meros 
�mpares digitados na op��o 2 e encerrar o algoritmo.
*/

#include <stdio.h>

int main() {
    int opcao;
    int num;
    int contPares = 0;   
    int contImpares = 0; 

    do {
        
        printf("\n# MENU PRINCIPAL #\n");
        printf("[1] Digitar um numero par\n");
        printf("[2] Digitar um numero impar\n");
        printf("[3] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                
                do {
                    printf("Digite um numero par: ");
                    scanf("%d", &num);
                    if (num % 2 != 0) {
                        printf("Numero invalido! Precisa ser par.\n");
                    }
                } while (num % 2 != 0);

                contPares++;  
                break;

            case 2:
                
                do {
                    printf("Digite um numero impar: ");
                    scanf("%d", &num);
                    if (num % 2 == 0) {
                        printf("Numero invalido! Precisa ser impar.\n");
                    }
                } while (num % 2 == 0);

                contImpares++;  
                break;

            case 3:
                
                printf("\nSaindo do programa...\n");
                printf("Quantidade de numeros pares: %d\n", contPares);
                printf("Quantidade de numeros impares: %d\n", contImpares);
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);  

    return 0;
}

