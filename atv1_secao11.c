/*
a) Crie/abra um arquivo texto de nome “arq.txt”;
b) Permita que o usuário grave diversos caracteres neste arquivo, até que o usuário entre com o caractere
‘0’;
c) Feche o arquivo;
d) Abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados. 
*/
#include <stdio.h>

int main(){

    FILE *arq1, *arq2;
    char caractere = 'A';

    arq1 = fopen("arq.txt", "wa");

    if(arq1){
        while(caractere != '0'){
            printf("Informe um caractere ou 0 para sair: \n");
            scanf(" %c", &caractere);

            if (caractere != 0){
                fputc(caractere, arq1);
            }
        }
    }else {
        printf("Nao foi possivel criar o arquivo.");
    }
    
    fclose(arq1);
    arq1 = NULL;

    arq2 = fopen("arq.txt", "r");

    if(arq2){
        while((caractere = getc(arq2)) != EOF){
            printf("%c\n", caractere);
        }

    }else{
        printf("nao foi possivel abrir o arquivo.");
    }

    fclose(arq2);
    arq2 = NULL;

    return 0;
}