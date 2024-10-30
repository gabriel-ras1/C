#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arq;
    char texto[256];
    int qnt = 46;

    arq = fopen("binario.txt", "rb");// b - binário
    if( arq == NULL){
        printf("Nao foi possivel encontrar o arquivo.\n");
        return 1;
    }

    fread(texto, sizeof(char),qnt, arq);
    
    printf("texto: %s", texto);
    
    fclose(arq);

    return 0;
}