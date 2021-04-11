/*
  Escreva um procedimento recursivo para imprimir todos os números naturais de 0 até N em
ordem crescente.
*/
#include <stdio.h>

int ordenacao_crescente(int index, int n){
  printf("%d - ", n);
  while (index < n) {
    return ordenacao_crescente(index, n-1);
  }
}


int main(void) {
  int numero;
  int index = 0;
  printf("Insira um número natural: ");
  fflush(stdin);
  scanf("\n%d", &numero);
  printf("%d\n", ordenacao_crescente(index, numero));
  return 0;
}
