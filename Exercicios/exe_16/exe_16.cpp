/*
Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1, 2, 3, 
4,...) para que a sua soma ultrapasse o valor 100 o mínimo possível.
*/

#include <stdio.h>

int main(){
	
	int soma, contador;
	
	soma = 0;
	contador = 1;
	
	while(soma <= 100){
		printf("%d\n", contador);
		soma = soma + contador;
		contador++;
	}
	
	contador = contador - 1;
	
	printf("\nSoma = %d", soma);
	
	printf("\nOs numeros necessarios para a conta foram: %d", contador);
	
}
