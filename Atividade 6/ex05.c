/*
  Crie um vetor V com n inteiros, onde n é um valor inteiro fornecido pelo usuário.
  O vetor só deve ser alocado na memória depois que o usuário fornecer o valor de n .
*/


#include <stdio.h>
#include <stdlib.h> //onde encontra-se malloc e free

/*
  void* malloc (size_t quantidade_de_bytes);
*/

int main () {
  /* DECLARAÇÃO DE VARIÁVEIS: */
  int *v; // declaracao de um ponteiro de vetor
  int numero; // número onde ficará armazenado o valor que o usuário digitou
  // MAIN
  printf("Digite o número necessário para o seu vetor: ");
  scanf("%d", &numero);
  /* Ponteiro de vetor (v) recebe malloc, onde o numero digitado pelo usuário é multiplicado pelo número de bytes de 1 inteiro. */
  v = malloc(numero * sizeof(int));

  //loop para controlar a inserção de dados:
  for (int i = 0; i < numero; i++) {
    printf("[%dº] Número: ", i+1);
    scanf("%d", &v[i]); // a cada iteração armazenar os valores no endereço de vetor nas posições de i
  }

  for (int i = 0; i < numero; i++) {
    printf("Vetor [%d]: %d ", i, v[i]); //a cada iteração exibir os valores armazenados no vetor v nas posições (indíces) de i
    printf("\n");
  }
  return 0;
}
