#include <stdio.h>
//matrizes - parte 1



//array multi-dimensional
//char nome[3][50];

int main(){
    //vetores e strings
    char nome[3][50];
    for(int i = 0; i < 3; i++){
        printf("Qual seu nome? \n");
        gets(nome[i]);
    }
   for(int i = 0; i < 3; i++){
        printf("Olá %s", nome[i]);
    }
    
    return 0;
}