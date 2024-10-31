/*
Faça um programa que receba do usuário o nome de um arquivo texto e mostre na tela quantas linhas
este arquivo possui. 
*/
#include <stdio.h>

int main(){

    FILE *arq;
    char nome_arquivo[9];//arq1.txt
    int conta_linhas = 0;

    printf("Informe o nome do arquivo a ser aberto: ");
    fgets(nome_arquivo, 9, stdin);

    arq = fopen(nome_arquivo, "r");

    if(arq){
        for(char c = getc(arq); c != EOF; c = getc(arq)){
            if(c == '\n'){
                conta_linhas = conta_linhas + 1;
            }
        }
        printf("O arquivo %s possui %d linhas.", nome_arquivo, conta_linhas);
    }else{
        printf("Nao foi possivel encontrar o arquivo");
        return 1;
    }

  fclose(arq);
  arq = NULL;

    return 0;
}