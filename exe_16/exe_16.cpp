/*
Escreva um algoritmo que forne�a quantos n�meros devem existir em sequ�ncia a partir do 1 (1, 2, 3, 
4,...) para que a sua soma ultrapasse o valor 100 o m�nimo poss�vel.
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
