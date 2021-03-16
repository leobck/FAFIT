/*
    Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.
*/

#include <stdio.h>

struct planoCartesiano{
  float x;
  float y;
};

int main() {
  struct planoCartesiano coordenadas;
  printf("\nInsira um valor para X: ");
  scanf("%f", &coordenadas.x);
  printf("\nInsira um valor para Y: ");
  scanf("%f", &coordenadas.y);
  printf("\nA distancia entre os pontos corresponde a: %f\n", (coordenadas.y - coordenadas.x));
  return 0;
}
