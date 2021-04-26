/*
  Escreva um método recursivo para determinar o menor elemento de um vetor não-ordenado de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int menor(int *vetor, int limite){
  int temp;
  if (limite == 1)
    return vetor[0];
  temp = menor (vetor + 1, limite-1);
  return (vetor[0] < temp) ? vetor[0] : temp;
}

int main (void) {

  int vetor[] = {1, 23, 45, 65, 80, 99};
  int limite = sizeof(vetor) / sizeof(int);
  int menorValor;

  menorValor = menor(vetor, limite);
  printf("O menor valor do vetor é: [%d]\n", menorValor);

  return 0;
}
