/*
* Peça ao usuário para digitar três valores inteiros e imprima a soma deles. 
*/
#include <stdio.h>

int main(){
//definindo variaveis
int n1,n2,n3,soma;

printf("digite tres numeros inteiros: \n");

//recebendo valores
scanf("%d %d %d",&n1,&n2,&n3);

//somando os valores
soma = n1+n2+n3;

//imprimindo soma
printf("soma dos numeros: %d",soma);

return 0;
}
