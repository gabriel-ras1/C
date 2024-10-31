/*
Crie um programa que tenha uma struct chamada aluno contendo nome, número de matrícula e curso.
Leia do usuário a informação de 5 alunos, armazene em um vetor desta estrutura e imprima os dados na
tela. 
*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int matricula;
    char curso[50];
}st_aluno;

int main(){
    
    st_aluno aluno[5];

    for(int i = 0; i < 5; i++){
    printf("Informe o nome do aluno %d: \n", i + 1);
    fgets(aluno[i].nome, 100, stdin);

    printf("Informe a matricula do aluno %d: \n", i + 1);
    scanf("%d", &aluno[i].matricula);
    getchar();

    printf("Informe o curso do aluno %d: \n", i + 1);
    fgets(aluno[i].curso, 100, stdin);
    }

    printf("========== Base de dados alunos ==========\n");

    for(int i = 0; i < 5; i++){
        printf("Nome do aluno %d: %s\n", i + 1, strtok(aluno[i].nome, "\n"));
        printf("Matricula do aluno %d: %d\n", i + 1, aluno[i].matricula);
        printf("Curso do aluno %d: %s\n\n", i + 1, strtok(aluno[i].curso, "\n"));
    }

    return 0;
}