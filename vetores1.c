#include <stdio.h>
//vetores - parte 1

//array uni-dimensional
//char nome[50];

int main(){
    //vetores e strings
    char nome[50];
    printf("Qual seu nome? \n");
    gets(nome);
    printf("Olá %s", nome);

    //vetores e caracteres
    char letras[26];
    int i;

    int contador = 0;
    for(i = 97; i <= 122; i++){
        letras[contador] = i;
        contador = contador + 1;
    }
    for( i = 0; i < 26; i++){
        printf("%d == %c\n", letras[i],letras[i]);
    }

    //vetores e caracteres
    int numeros[10];

    //vetores e reais
    float valores[5];


    return 0;
}