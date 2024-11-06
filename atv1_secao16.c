/*
1. Crie um programa que:
a) Aloque dinamicamente um array de 5 números inteiros;
b) Peça para o usuário informar os 5 números no espaço alocado;
c) Mostre na tela os 5 valores;
d) Libere a memória alocada; 
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int vetor = 5, *p;

    p = (int*)malloc(vetor * sizeof(int));

    for(int i = 0; i < 5; i++){
        printf("Informe o %d numero: ", i+1);
        scanf("%d",&p[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("O valor na posicao %d e: %d \n", i+1,p[i]);
    }

    printf("a variavel 'vetor' ocupa %ld bytes em memoria.\n",vetor * sizeof(int));

    free(p);
    p = NULL; //medida de segurança

    return 0;
}