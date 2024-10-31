#include<stdio.h>
#include<string.h>


// A union, separa e utiliza apenas o espaço da maior variavel.
union pessoa{
    char nome[100];
    int idade;
}

int main(){

    union pessoa pes;

    strcpy(pes.nome, "angelina jolie");
    printf("dados de %s\n", pes. nome);

    pes.idade = 39;
    printf("Ela tem %d anos\n", pes.idade);

    printf("A variavel 'pes' esta ocupando %ld bytes em memoria." sizeof(pes));

    return 0;
}