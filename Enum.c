#include<stdio.h>
#include<string.h>

//Enum -> Enumeração

enum dias_da_semana{
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};

int main(){
    enum dias_da_semana d1, d2;

    d1 = quinta; 

    d2 = 3;

    if(d1 == d2){
        printf("Os dias sao iguais...");
    }else{
        printf("OS dias nao sao iguais");
    }


    return 0;
}