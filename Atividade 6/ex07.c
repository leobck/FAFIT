/*
  Escreva um método que receba um vetor de inteiros e retorne o maior elemento e o menor elemento. Observe que o método deve retornar ao local da chamada os dois valores (não imprimir ao usuário).
  Portanto, você precisará usar passagem de parâmetro por referência, já que os métodos só podem retornar um único valor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int *v;
  int maior, menor, numero;

  printf("Digite o número necessário para o seu vetor: ");
  scanf("%d", &numero);

  v = malloc(numero * sizeof(int));

  for (int i = 0; i < numero; i++) {
    printf("[%dº] Número: ", i+1);
    scanf("%d", &v[i]);
  }

  return 0;
}
