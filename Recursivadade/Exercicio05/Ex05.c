/*
  Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int mediaRecursiva(int vetor[], int index){
  if (index == 0){
    return 0;
  }else if(index == 5){
    return (vetor[index - 1] + mediaRecursiva(vetor, index - 1)) / 5;
  }else{
    return vetor[index - 1] + mediaRecursiva(vetor, index - 1);
  }
}

int main(){
  int vetor[5] = {10, 20, 30, 40, 50};
  printf("\nA média é de: [%d]\n", mediaRecursiva(vetor, 5));
  return 0;
}
