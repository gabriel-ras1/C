/*
Faça um programa que tenha uma função que, dado um caractere qualquer de entrada, retorne o mesmo
caractere sempre em maiúsculo. 
*/
#include<stdio.h>

char get_maiusculo(char caractere){
    char maiusculo = (int)caractere - 32;
    
    return maiusculo;
}

int main(){
    
    char caractere = 'a';

    char maiusculo = get_maiusculo(caractere);

    printf("O caractere '%c' maiusculo e '%c' ", caractere, maiusculo);
 


    return 0;
}