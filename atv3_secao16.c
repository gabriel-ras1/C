/* 
Faça um programa que receba do usuário o tamanho de uma string e chame uma função para locar
dinamicamente essa string. Receba esta string do usuário. Por fim, apresente conteúdo dessa string sem
suas vogais.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int tamanho;
    char *p;

    printf("Informe o tamanho da string: ");
    scanf("%d", &tamanho);
    getchar();

    p = (char*)malloc(sizeof(char) * tamanho + 1);

    printf("Informe a sting: ");
    fgets(p, tamanho + 1, stdin);

    for(int i = 0; i <= tamanho; i++){
        
        if(*(p + i) != 'a' && *(p + i) != 'A'  && *(p + i) != 'e'  && *(p + i) != 'E' && *(p + i) != 'i' && *(p + i) != 'I' && *(p + i) != 'o' && *(p + i) != 'O' && *(p + i) != 'u' && *(p + i) != 'U'
        ){
            printf("%c", *(p + i));
        }
    }
    return 0;
}