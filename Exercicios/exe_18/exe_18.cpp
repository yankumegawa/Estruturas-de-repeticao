/*
Escreva um algoritmo que apresente o seguinte menu:
 # MENU PRINCIPAL #
 [1] Inserir
 [2] Excluir
 [3] Consultar
 [4] Listar 
 [5] Sair
 Se as opções 1, 2, 3 ou 4 forem escolhidas, mostrar na tela o nome da opção (Inserir, Excluir, Consultar, 
Listar). Se a opção 5 for escolhida, encerrar a execução do algoritmo.
*/

#include <stdio.h>

int main() {
    int opcao;

    do {
   
        printf("\n# MENU PRINCIPAL #\n");
        printf("[1] Inserir\n");
        printf("[2] Excluir\n");
        printf("[3] Consultar\n");
        printf("[4] Listar\n");
        printf("[5] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Opcao escolhida: Inserir\n");
                break;
            case 2:
                printf("Opcao escolhida: Excluir\n");
                break;
            case 3:
                printf("Opcao escolhida: Consultar\n");
                break;
            case 4:
                printf("Opcao escolhida: Listar\n");
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 5);

    return 0;
}

