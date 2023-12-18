#include <stdio.h>

struct aluno{
    char nome[30];
    float nota[2];
    float media;
};

#define QTD_ALUNO 2

void adicionarAluno(struct aluno *p, int q);
void imprimirAluno(struct aluno *o, int q);

int main(){

    struct aluno alu[QTD_ALUNO];

    adicionarAluno(alu, QTD_ALUNO);
    imprimirAluno(alu, QTD_ALUNO);

    return 0;
}

void adicionarAluno(struct aluno *p, int q){
    for(int i = 0; i<q; i++){
        puts("Digite o nome do aluno");
        scanf("%s", (p+i)->nome);
        puts("Digite a primeira nota do aluno");
        scanf("%f", &(p+i)->nota[0]);
        puts("Digite a segunda nota do aluno");
        scanf("%f", &(p+i)->nota[1]);
        (p+i)->media = (((p+i)->nota[0])+((p+i)->nota[1]))/2.0;
    }
}

void imprimirAluno(struct aluno *o, int q){
    for(int i=0; i<q; i++){
        printf("Aluno %s, média = %.2f\n", (o+i)->nome, (o+i)->media);
    }
}