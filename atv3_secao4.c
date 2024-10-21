#include <stdio.h>

int main() {
    int i,maior  = 0,menor,num;

   for(i = 0; i < 10; i++){
    printf("digite um numero: ");
    scanf("%d",&num);

    if(i == 0){
    maior = num;
    menor = num;
    }
    

    if( num > maior){
        maior = num;
    }
    if (num < menor){
        menor = num;
    }
    
   }

   printf("menor numero: %d\n",menor);
   printf("maior numero: %d\n",maior);


    return 0;
}

