/*
	Usando as estruturas Retangulo e Ponto dos exercícios anteriores, faça um programa que declare e leia uma estrutura Retangulo e um Ponto e informe se esse ponto está ou não dentro do retângulo.
*/
#include <stdio.h>
#include <math.h>
/* FUNÇÕES E STATEMENTS */
struct Ponto{
  double x; // coordenada X
  double y; // coordenada Y
};

struct Retangulo{
  struct Ponto pontoSuperiorEsquerdo;
  struct Ponto pontoInferiorDireito;
};

int main() {
  //VARIAVEIS E DECLARAÇÕES:
  struct Retangulo retangulo;
	struct Ponto ponto;
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
	printf("[ -- PONTO -- ]\n");
	printf("\nDigite a coordenada X do ponto que seja verificar: ");
	scanf("%lf", &ponto.x);
	printf("\nDigite a coordenada Y do ponto que seja verificar: ");
	scanf("%lf", &ponto.y);
	if(
			(ponto.x >= retangulo.pontoSuperiorEsquerdo.x && ponto.x <= retangulo.pontoInferiorDireito.x)
				&&
			(ponto.y <= retangulo.pontoSuperiorEsquerdo.y && ponto.y >= retangulo.pontoInferiorDireito.y)
		){
				printf("\nO ponto esta contido no retangulo.\n\n");
		}else{
			printf("\nO ponto nao esta contido no retangulo.\n\n");
		}
  //CORPO -- FIM
  return 0;
}
