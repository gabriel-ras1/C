/*
Crie um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma
struct. 
*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[70];
    int idade;
    char endereco[100];
}st_dados;

int main(){

    st_dados dados;

    printf("Informe seu nome: \n");
    fgets(dados.nome,70,stdin);

    printf("Informe sua idade: \n");
    scanf(" %d", &dados.idade);
    getchar();

    printf("Informe seu endereco: \n");
    fgets(dados.endereco,70,stdin);

    printf("========== Dados ==========\n");
    printf("Nome : %s\n", strtok(dados.nome, "\n"));
    printf("Idade : %d\n", dados.idade);
    printf("endereco : %s\n", strtok(dados.endereco, "\n"));


    return 0;
}