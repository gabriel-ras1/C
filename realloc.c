#include<stdio.h>
#include<stdlib.h>

//relloc - realocação de memoria

//malloc -
//calloc -

int main(){

    int qtd,*p;
    
    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int)); //3 x 4 == 12 bytes // nao remove lixo da memoria
    //p = (int*)calloc(qtd, sizeof(int)); //3 x 4 == 12 bytes // zera o espaço em memoria

    if(p){
        printf("A variavel 'p' ocupa %ld bytes em memoria.\n",qtd * sizeof(int));

        printf("Informe a quantidade de elementos para o vetor: ");
        scanf("%d", &qtd);
       
        p = (int*)realloc(p, qtd * sizeof(int));

        if(p){
            printf("a variavel 'p' ocupa %ld bytes em memoria.\n",qtd * sizeof(int));
        }

    }else{
        printf("Erro: Memoria insuficiente!!!");
    }
    
    //liberar a memória

    free(p);
    p = NULL; //medida de segurança

    return 0;

}
