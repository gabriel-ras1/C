#include<stdio.h>

int main(){
    int vetor[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 10; i++){
        printf("informe o valor %d de 10: ", i + 1);
        scanf("%d", &vetor[i]);

        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }

    for(int i = 0; i < 10; i++){
       printf("vetor na posiçao %d vale %d\n", i, vetor[i]);
    }
    return 0;
}