#include<stdio.h>
#include<string.h>
//Struct -> estrutura

  struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
};

//typedef -- redefinir tipos


int main(){
    struct st_aluno  aluno1;

    printf("Informe a matricula do aluno: ");
    fgets(aluno1.matricula, 10, stdin);

    printf("Informe a nome do aluno: ");
    fgets(aluno1.nome, 100, stdin);

    printf("Informe a curso do aluno: ");
    fgets(aluno1.curso, 50, stdin);

    printf("Informe o ano de nascimento do aluno: ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("============ Dados do aluno ============\n");
    printf("Matricula: %s\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Curso: %s\n", aluno1.curso);
    printf("Ano de nascimento: %d\n", aluno1.ano_nascimento);

    return 0;
}