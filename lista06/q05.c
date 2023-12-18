#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Professor;

typedef struct {
    char nome[50];
    Professor professor;
} Disciplina;

void adicionarDisciplina(Disciplina* disciplina) {
    printf("Digite o nome da disciplina: ");
    scanf("%s", disciplina->nome);
    printf("Digite o nome do professor: ");
    scanf("%s", disciplina->professor.nome);
    printf("Digite a idade do professor: ");
    scanf("%d", &disciplina->professor.idade);
}

void imprimirDisciplina(Disciplina disciplina) {
    printf("Nome da disciplina: %s\n", disciplina.nome);
    printf("Nome do professor: %s\n", disciplina.professor.nome);
    printf("Idade do professor: %d\n", disciplina.professor.idade);
}

int main() {
    Disciplina disciplina;
    adicionarDisciplina(&disciplina);
    imprimirDisciplina(disciplina);
    return 0;
}
