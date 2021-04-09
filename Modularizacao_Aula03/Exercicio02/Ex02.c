/*
  1) Crie uma estrutura chamada Retangulo. OK
  2) Essa estrutura deverá conter o ponto superior esquerdo e o ponto inferior direito do retângulo. OK
  3) Cada ponto é definido por uma estrutura Ponto, criada no exercício anterior. OK
  4) Faça um programa que declare e leia uma estrutura Retangulo e exiba a área, o comprimento da diagonal e o perímetro desse retângulo.
  ___________________________
  * ÁREA (A = base * altura)
  * COMPRIMENTO DA DIAGONAL (d² = b² + h² ou sqrt(b²+h²))
  * PERÍMETRO (P = 2 * (b+h))
*/
#include <stdio.h>
#include <math.h>
/* FUNÇÕES E STATEMENTS */
double calcularArea(double base, double altura){
  double area = 0;
  area = (base * altura);
  return area;
};

double calcularDiagonal(double base, double altura){
  double diagonal = 0;
  diagonal = sqrt((pow(base, 2)) + (pow(altura, 2)));
  return diagonal;
};

double calcularPerimetro(double base, double altura){
  double perimetro = 0;
  perimetro = 2 * (base + altura);
  return perimetro;
};

double base(double a, double b){
  double base = 0;
  base = a - b;
  return base;
}

double altura(double a, double b){
  double altura = 0;
  altura = a - b;
  return altura;
}

typedef struct {
  double x; // coordenada X
  double y; // coordenada Y
} Ponto;

typedef struct {
  Ponto pontoSuperiorEsquerdo;
  Ponto pontoInferiorDireito;
} Retangulo;

int main() {
  //VARIAVEIS E DECLARAÇÕES:
  Retangulo retangulo;
  //CORPO -- INÍCIO
  printf("\n[__RETANGULO__]\n\n");
  printf("[ -- PARTE SUPERIOR ESQUERDA -- ]\n");
  printf("\nEm relacao aos pontos da parte superior esquerda, insira uma coordenada para X: ");
  scanf("%lf", &retangulo.pontoSuperiorEsquerdo.x);
  printf("\nAgora, ainda em relacao a parte superior esquerda, insira uma coordenada para Y: ");
  scanf("%lf", &retangulo.pontoSuperiorEsquerdo.y);
  printf("[ -- PARTE INFERIOR DIREITA -- ]\n");
  printf("\nEm relacao aos pontos da parte inferior direita, insira uma coordenada para X: ");
  scanf("%lf", &retangulo.pontoInferiorDireito.x);
  printf("\nAgora, ainda em relacao a parte inferior direita, insira uma coordenada para Y: ");
  scanf("%lf", &retangulo.pontoInferiorDireito.y);
  printf("\n");
  printf("\n[   RESULTADOS   ]\n");
  printf("\nArea -> %.2lf", calcularArea(base(retangulo.pontoSuperiorEsquerdo.x, retangulo.pontoInferiorDireito.x), altura(retangulo.pontoSuperiorEsquerdo.y, retangulo.pontoInferiorDireito.y)));
  printf("\nDiagonal -> %.2lf", calcularDiagonal(base(retangulo.pontoSuperiorEsquerdo.x, retangulo.pontoInferiorDireito.x), altura(retangulo.pontoSuperiorEsquerdo.y, retangulo.pontoInferiorDireito.y)));
  printf("\nPerimetro -> %.2lf\n\n", calcularPerimetro(base(retangulo.pontoSuperiorEsquerdo.x, retangulo.pontoInferiorDireito.x), altura(retangulo.pontoSuperiorEsquerdo.y, retangulo.pontoInferiorDireito.y)));
  //CORPO -- FIM
  return 0;
}
