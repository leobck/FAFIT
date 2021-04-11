/*
  Escreva uma função recursiva que retorne o menor elemento em um vetor.
*/

#include <stdio.h>

int menor_recursivo( int vetor[], int tam ) {
    if( tam == 1 ){
      return vetor[0];
    }

    int menor = 0;
    menor = menor_recursivo(vetor + 1, tam - 1);
    return (vetor[0] < menor ) ? vetor[0] : menor;
}

int main() {
    int vetor[]= {5, 10, 15, 20, 100, 500, 750, 1250, 9870, 1};
    int tam = sizeof(vetor) / sizeof(int);
    int min = menor_recursivo(vetor, tam);
    printf("%d\n", min);
    return 0;
}
