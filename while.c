#include <stdio.h>

int main (){
    int numero, soma = 0;

    while(numero != 0){
        printf("informe um numero: ");
     scanf("%d", &numero);
        soma = soma + numero;
    }

    printf("A soma e %d", soma);
    
    return 0;

}