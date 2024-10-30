#include <stdio.h>
// FILE == arquivo

int main(){

    FILE *arq;
    int num, resultado, soma = 0;

    arq = fopen("arquivo4.txt", "r");

    if(arq){
        while(!feof(arq)){
            resultado = fscanf(arq, "%d", &num);
            if(resultado == 1){
                soma = soma + num;
            }
        }
    }else{
        printf("nao achei o arquivo");
    }

    printf("A soma dos numero encontrado é %d", soma);
    fclose(arq);

    return 0;
}