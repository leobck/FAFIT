/*
  Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int somaRecursiva(int vetor[], int index) {
  if (index == 0){
    return 0;
  }else {
    return (vetor[index - 1] + somaRecursiva(vetor, index - 1));
  }
}

int main(){
  int vetor[5] = {5, 25, 125, 625, 3125};
  printf("A soma é de [%d]\n", somaRecursiva(vetor, 5));
  return 0;
}
