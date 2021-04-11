/*
  Escreva uma função recursiva que receba um valor inteiro em base decimal e o imprima em base binária.
*/

#include <stdlib.h>
#include <stdio.h>

int conversor_binario(int numero) {
	if (numero == 3 || numero == 2){
    return (10 + (numero % 2));
  }else{
    return (conversor_binario(numero / 2) * 10 + (numero % 2));
  }
}

int main() {
	int numero;
	printf("\nDigite um número inteiro positivo que deseja converter para a base binaria: ");
	scanf("%d", &numero);
	printf("\nBase decimal: %d\nBase binaria: %d\n\n", numero, conversor_binario(numero));
	return 0;
}
