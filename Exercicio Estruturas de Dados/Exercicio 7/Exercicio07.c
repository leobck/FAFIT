/* Crie uma estrutura Atleta representando um atleta. Essa estrutura deve conter o nome do atleta,seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas.Calcule e exiba os nomes do atleta mais alto e do mais velho.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

struct Atleta{
	char nome[20];
	char esporte[20];
	int idade;
	float altura;
};

int main() {
	
	struct Atleta atletas[MAX];
	int i, totalGravado;
	
	printf("\n--- LENDO DADOS ---");
	for(i=0; i<MAX; i++) {
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
}