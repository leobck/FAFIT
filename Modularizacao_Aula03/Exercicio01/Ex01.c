/*
  Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.
*/

#include <stdio.h>
#include <math.h>

typedef struct {
  double x;
  double y;
} Ponto;

double calculaDistancia (double a, double b) {
  double resultado = 0;
  resultado = b - a;
  return resultado;
}

int main() {
  Ponto ponto;
  fflush(stdin);
  printf("Insira o valor para X: ");
  scanf("%lf", &ponto.x);
  printf("Insira o valor para Y: ");
  scanf("%lf", &ponto.y);
  printf("\nA distância entre X [%.2lf] e Y [%.2lf] é de: ", ponto.x, ponto.y);
  printf("%.2lf\n", calculaDistancia(ponto.x, ponto.y));
  return 0;
}
