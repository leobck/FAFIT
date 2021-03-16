/*
    Escreva um programa que contenha uma estrutura Data representando uma data válida. Essa estrutura deve conter os campos “dia”, “mês” e “ano”. Em seguida, leia duas datas e armazenenessa estrutura. Calcule e exiba o número de dias que decorreram entre as duas datas.
*/
#include <stdio.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

int main(){
    struct Data data[2];
    for(int i=0; i <= 1;i++){
        printf("\nA %iº data: ", i+1);
        printf("\nInsira o dia: ");
        scanf("%i", &data[i].dia);
        printf("\nInsira o mes: ");
        scanf("%i", &data[i].mes);
        printf("\nInsira o ano: ");
        scanf("%i", &data[i].ano);
    }
    return 0;
}