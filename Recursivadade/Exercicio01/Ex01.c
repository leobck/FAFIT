#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
  Escreva uma função recursiva que calcule a soma dos primeiros n cubos:

  S = 1³ + 2³ + ... + n³
*/

int calculaCubo(int numero){
  int soma = 0;
  if (numero == 1) {
    return 1;
  } else {
    /*
      A soma recebe a soma (anterior) faz a adição dessas duas variáveis somando seus números a terceira potência.
    */
    soma += calculaCubo(numero-1) + pow(numero, 3);
    return soma;
  }
}

int main(void) {
  int numero = 0;
  printf("\nInsira um número: ");
  scanf("%d", &numero);
  printf("\n%d\n", calculaCubo(numero));
  return 0;
}
