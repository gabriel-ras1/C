/*
Faça um programa que receba do usuário o nome de um arquivo texto e um caractere. Mostre na tela
quantas vezes aquele caractere aparece dentro do arquivo.

*/
#include <stdio.h>

int main(){

    FILE *arq;
    char nome_arquivo[9];//arq1.txt
    char caractere = 0;
    int conta_caractere = 0;

    printf("Informe o nome do arquivo a ser aberto: ");
    fgets(nome_arquivo, 9, stdin);
    
    printf("Informe o caractere a ser pesquisado: ");
    scanf(" %c", &caractere);

    arq = fopen(nome_arquivo, "r");

    if(arq){
        for(char c = getc(arq); c != EOF; c = getc(arq)){
            if(c == caractere){
                conta_caractere = conta_caractere + 1;
            }
        }
        printf("O arquivo %s possui %d caractere(s) desse tipo.", nome_arquivo, conta_caractere);
    }else{
        printf("Nao foi possivel encontrar o arquivo");
        return 1;
    }

    fclose(arq);
      arq = NULL;

    return 0;
}