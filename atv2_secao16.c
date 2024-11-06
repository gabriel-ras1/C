/*
Faça um programa aloque inicialmente um vetor com 3 inteiros, pergunte ao usuário quantos valores ele
quer informar, use REALLOC caso seja mais que 3 valores, leia e apresente os valores. 
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int qnt, *p;

    p = (int*)malloc(3 * sizeof(int));

    printf("O programa possui tres espaços vazios.\n");
    printf("informe um valor maior caso queira mais espaco na memoria:\n");
    scanf("%d", &qnt);

    if(qnt > 3){
        p = (int*)realloc(p, sizeof(int) * qnt);
    }

    for(int i = 0; i < qnt; i++){
        printf("informe o valor %d de %d:\n", i + 1, qnt);
        scanf("%d", &p[i]);
    }

     for(int i = 0; i < qnt; i++){
        printf("Na posicao %d temos o valor %d\n ", i + 1, p[i]);
    }

    free(p);
    p = NULL; //medida de segurança

    return 0;
}