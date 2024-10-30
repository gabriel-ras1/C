#include<stdio.h>

int main(){

    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("valor %d dobrado: %d\n",*(vetor + i) , *(vetor + i) * 2);
    }

    return 0;
}