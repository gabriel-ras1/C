#include <stdio.h>
//matrizes- parte 2



int main(){

    //vetores de inteiros
    int numeros[2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
        printf("numeros[%d][%d] vale %d\n",i,j,numeros[i][j]);
        }
    }
    

    //vetores e reais
    float valores[2][2];
    int valor = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
        printf("valores[%d][%d] vale %d\n",i,j,valores[i][j]);
        }
    }
    
   
    return 0;
}