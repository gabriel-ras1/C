/*
Crie um programa que tenha uma função recursiva que receba um valor inteiro e converta este número
para binário.
*/
#include <stdio.h>

int binario(int n){
    if(n == 0){
        return n;
    } else{
        return (n % 2 + 10 * binario(n / 2));
    }
}

int main(){
    int n = 5;
    printf("O numero %d em binario e %d", n, binario(n));
    return 0;
}