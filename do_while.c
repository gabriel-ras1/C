#include <stdio.h>

int main (){
    int numero, soma = 0;

    do{
        printf("informe um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;

    }while(numero != 10);

    printf("A soma e %d", soma);
    
    return 0;

}