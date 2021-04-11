/*
  Escreve uma função recursiva que receba por parâmetro dois valores inteiros x e y e calcule e retorne o resultado de x^y (x elevado a y) para o programa principal.
*/

#include <stdio.h>

int exponencial_recursivo(int x, int y){
  if (y == 1) {
    return x;
  }else {
    return (x * exponencial_recursivo(x, y-1));
  }
}


int main(){
  int x = 0;
  int y = 0;
  printf("\nInforme a base: ");
  scanf("%d", &x);
  printf("\nInforme o expoente: ");
  scanf("%d", &y);
  printf("\nO valor exponencial é de: %d\n", exponencial_recursivo(x, y));
  return 0;
}
