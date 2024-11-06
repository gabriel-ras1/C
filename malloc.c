#include<stdio.h>
#include<stdlib.h>

//malloc -

int main(){

    int qtd, *p;
    printf("informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int)); 

    if(p){
    for(int i = 0; i < qtd; i++){
        printf("Informe o valor para a posicap %d do vetor: ", i);
        scanf("%d", &p[i]);
    }
     for(int i = 0; i < qtd; i++){
        printf("No vetor 'numeros[%d]' esta o valor %d: \n", i , p[i]); 
    }
    }else{
        printf("Erro: Memória insuficiente!!!");
    }

    qtd = qtd * sizeof(int);

    printf("A variavel 'numeros' ocupa %d bytes em memoria.\n", qtd);

    //liberar a memória

    free(p);
    p = NULL; //medida de segurança

    return 0;

}