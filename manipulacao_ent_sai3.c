#include <stdio.h>

int main (){
    
    FILE *arq;
    char fruta[10];

    arq = fopen("frutas.txt","w"); //write -> escrita

    if(arq){
        printf("informe uma fruta, ou 0 para sair:\n");
        fgets(fruta, 10, stdin);
        while(fruta[0] != '0'){
            fputs(fruta, arq);
            printf("informe uma fruta, ou 0 para sair:\n");
            fgets(fruta, 10, stdin);
        }
    }else{
        printf("Nao foi possivel criar o arquivo.");
    }

    return 0;
}