#include<stdio.h>



int main(){

    int inteiro = 10;
    float real = 2.5;
    char caractere = 97;

    int* ponteiro_inteiro;
    float* ponteiro_real;
    char* ponteiro_char;

    printf("antes de modificar: \n");
    printf("%d\n",inteiro);
    printf("%.2f\n",real);
    printf("%c\n",caractere);
    

    ponteiro_inteiro = &inteiro;
    ponteiro_real = &real;
    ponteiro_char = &caractere;
    
    printf("depois de modificar: \n");
    printf("%d\n",ponteiro_inteiro);
    printf("%.2f\n",ponteiro_real);
    printf("%c\n",ponteiro_char);


    return 0;
}