/*
Crie um programa que tenha uma função recursiva que receba um número inteiro positivo N e calcula e
apresente o somatório dos números de 1 a N. 
*/
#include <stdio.h>

int somatorio(int n){
    if(n < 0){
        printf("O valor precisa ser positivo.");
        return 0;
    } else if(n <= 1){
        return n;
    }
    return n + somatorio(n - 1);
}

int main(){
    int n = 5;
    printf("A soma dos %d primeiros numeros é %d", n, somatorio(n));
    return 0;
}