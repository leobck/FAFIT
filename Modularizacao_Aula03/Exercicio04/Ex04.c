/*
    Crie uma estrutura Aluno representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba onome e as notas do aluno que possui a maior média geral dentre os cinco.
*/
#include <stdio.h>
#include <math.h>

/* Criar uma estrutura Aluno*/
    typedef struct
    {
        /* Deve conter: número da matrícula, nome, nota  */
        int matricula;
        char nome[50];
        double nota[3];
    } Aluno;
/* Uma função que retorna a maior média geral dentros os cinco alunos e o seu nome */
double media(double vetor[]){
    double media = 0;
    double soma = 0;
    for(int i=0; i<3; i++){
        soma = soma + vetor[i];
    }
    media = (soma/3);
    return media;
}
int main()
{
    Aluno alunos;
    /* ler os dados de 5 alunos */
    for(int i = 0; i < 2; i++){
        printf("\nInsira o numero da matricula: ");
        scanf("%d", &alunos.matricula);
        printf("Digite o nome do aluno(a): ");
        //fflush(stdin);
        scanf("%s", alunos.nome);
        for(int j = 0; j < 3; j++){
            printf("Entre com a nota do(a) aluno(a): ");
            scanf("%lf", &alunos.nota[j]);
        }
        printf("\nMedia: %lf\n", media(alunos.nota));
    }
    /* exibir o nome e notas do aluno que possui a maior média geral dentre os cinco. */
    return 0;
}
