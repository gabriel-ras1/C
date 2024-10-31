#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arqn,*arqb;
    char texto[256];
    int qnt;

    arqn = fopen("dado.txt", "r");
    if(arqn == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    } 
   
    fgets(texto, sizeof(texto),stdin);
    printf("Texto normal: %s",texto);
    fclose(arqn);
    
    //

    arqb = fopen("dado.dat", "rb");
    if(arqb == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    } 

    fread(texto,sizeof(char),qnt, arqb);
    printf("texto bin:%s",texto);
    
    fclose(arqb);
    
    return 0;
}