#include <stdio.h>
// FILE == arquivo

int main(){

    FILE *arq;
    char c;
    char nome[10], *resultado;

    // fopen(nome - do arquivo, forma-de-abertura-do-arquivo)
    // w - abrir o arquivo para escrita (se o aqurivo já existir, será sobrescrito com um novo zerado)
    // r - abrir o arquivo para leitura (não podemos escrever no arquivo)
    // wa - abrir o aquivo para adição de conteúdo (se o arquivo já existir, o conteudo sera adicionado nas linhas abaixo)
    arq = fopen("arquivo3.txt", "r"); //leitutra
   
   // forma 1 de ver o arquivo;
    if (arq){
        while(( c = getc(arq)) != EOF){ //EOF == End of File //fim do arquivo
            printf("%c",c);
        }
    }else{
        printf("Nao achei o arquivo");
        return 1;
    }
    

    // forma 2 de ver o arquivo;
    if (arq){
       while(! feof(arq)){ //feof - file end of file
       resultado = fgets(nome, 10, arq);
        printf("Resultado: %d\n", resultado);
        if(resultado){
             printf("%s",nome);
        }  
       }
    }else{
        printf("Nao achei o arquivo");
        return 1;
    }

    //sempre que a gente finalizar a manipulação de um arquivo, devemos fechá-lo.
    fclose(arq);

    return 0;
}