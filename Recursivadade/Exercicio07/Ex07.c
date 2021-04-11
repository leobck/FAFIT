/*
  Escreva uma função recursiva que receba um valor inteiro x e o retorne invertido. Exemplo: se
  x = 123, a função deve retornar 321.
*/

#include <stdio.h>

int funcao_invert(int numero){
  if (numero/10 == 0) {
    return numero;
  }else {
    return ((numero % 10) * (int)pow(10, (int)log10(numero))) + funcao_invert(numero / 10);
  }
}

int main(){
  int numero;
	printf("\nDigite um número inteiro positivo que deseja inverter: ");
	scanf("%d", &numero);
	printf("\nOriginal: %d\nInvertido: %d\n\n", num, funcao_invert(numero));
  return 0;
}
