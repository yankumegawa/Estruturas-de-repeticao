/*
Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário (a senha válida é 
o número 2009). Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve 
ser mostrado na tela e deve ser solicitada uma nova senha até que ela seja válida. Caso contrário deve 
ser mostrado na tela a mensagem "ACESSO PERMITIDO" junto com um número de vezes que a senha 
foi informada.
*/

#include <stdio.h>

int main() {
    int senha;
    int tentativas = 0;
    const int SENHA_CORRETA = 2009;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        tentativas++; 

        if (senha != SENHA_CORRETA) {
            printf("ACESSO NEGADO\n");
        }

    } while (senha != SENHA_CORRETA); 

    printf("ACESSO PERMITIDO\n");
    printf("Numero de tentativas: %d\n", tentativas);

    return 0;
}

