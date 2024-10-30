#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arq;
    char texto[256];
    int qnt;

    arq = fopen("binario.txt", "wb");// b - binário
    if( arq == NULL){
        printf("Nao foi possivel encontrar o arquivo.\n");
        return 1;
    }

    printf("Digite seu texto: \n");
    //fgets -  A função fgets() armazena o resultado em string e inclui um caractere nulo (\0) no término da cadeia.
    //fgets - entra em texto
    //fgets - define o tamanho da cadeia no casa sizeof
    //fgets - inclue o stdin ponteiro constante
    //sizeof - permite que você evite especificar tamanhos de dados dependentes do computador em seus programas.
    fgets(texto,sizeof(texto),stdin);

    //strlen - retorna o comprimento de string.
    qnt = fwrite(texto, sizeof(char),strlen(texto),arq);

    printf("Quantidade de elementetos gravados: %d", qnt);

    fclose(arq);

    return 0;
}