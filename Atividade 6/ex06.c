/*
  Escreva um método que receba um vetor V com 10 inteiros armazenados. O método deve retornar o vetor V com o valor de cada posição multiplicado por 2. Os valores devem ser acessíveis fora do método.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void multiplicarVetor(int *v, int *vetorMultiplicado){
  int i;
  for (i = 0; i < MAX; i++) {
    * (vetorMultiplicado+i) = *(v+i) * 2;
  }
}

int main () {

  int v[MAX]; //todo vetor já é um ponteiro
  int vetorMultiplicado[MAX];
  int i;

  for (i = 0; i < MAX; i++) {
    printf("Posição [%d] || Valor: ", i);
    scanf("%d", &v[i]);
  }
  
  multiplicarVetor(v, vetorMultiplicado);

  for (i = 0; i < MAX; i++) {
    printf("Posição [%d] || Valor: [%d]\n", i, vetorMultiplicado[i]);
  }
  //printf("\n");

  /*for (i = 0; i < MAX; i++) {
    printf("Posição [%d] || Valor: %d\n", i, v[i]*2);
  }*/

  return 0;
}
