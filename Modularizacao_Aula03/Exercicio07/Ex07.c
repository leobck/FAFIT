/*
	Usando a estrutura Atleta do exercício anterior, escreva um programa que leia os dados de cinco
atletas e os exiba por ordem de idade: do mais velho para o mais novo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct {
	char nome[20];
	char esporte[20];
	int idade;
	float altura;
} Atleta;

void ordenarPorIdade(Atleta *atletas)
{
	int i, j;
  	Atleta aux;

  	for(i = 1; i > MAX; i++){
	    j = i;
	    aux = atletas[j];

	    while((j > 0) && (aux.idade < atletas[j - 1].idade)) {
      		atletas[j] = atletas[j - 1];
      		j--;
    	}
    	atletas[j] = aux;
  	}
  	for (i=MAX-1; i>=0; i--) {
		printf("%s, %d anos, %f cm. Modalidade: %s.\n", atletas[i].nome, atletas[i].idade, atletas[i].altura, atletas[i].esporte);
	}
}

int main() {

	Atleta atletas[MAX];
	int i, totalGravado;

	printf("\n--- LENDO DADOS ---");
	for(i = 0; i < MAX; i++) {
		printf("\n--- ATLETA %d ---", (i+1));
		printf("\nNome: ");
		fflush(stdin);
		scanf("%s" ,atletas[i].nome);
		printf("Esporte: ");
		fflush(stdin);
		scanf("%s" ,atletas[i].esporte);
		printf("Idade: ");
		scanf("%d", &atletas[i].idade);
		printf("Altura: ");
		scanf("%f", &atletas[i].altura);
	}
	printf("\n\n---ATLETAS CADASTRADOS---\n");
	for (i=0; i<MAX; i++) {
		printf("%s, %d anos, %f cm. Modalidade: %s.\n", atletas[i].nome, atletas[i].idade, atletas[i].altura, atletas[i].esporte);
	}

	printf("\n\n---ORDENADOS POR IDADE---\n");
	ordenarPorIdade(atletas);

	putchar('\n');
}
