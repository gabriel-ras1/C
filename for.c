#include <stdio.h>

int main (){
    int numero, soma = 0,i;
    
   for(i = 0; i < 5; i++){
    printf("informe um numero: ");
    scanf("%d", &numero);

    soma = soma + numero;
   }

    printf("A soma e %d", soma);
    
    return 0;

}