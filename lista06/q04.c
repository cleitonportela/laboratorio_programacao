#include <stdio.h>

typedef struct {
    float nota1;
    float nota2;
    float media;
} Aluno;

void adicionarNotas(Aluno* aluno) {
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno->nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno->nota2);
    aluno->media = (aluno->nota1 + aluno->nota2) / 2;
}

void imprimirMedia(Aluno aluno) {
    printf("A média é: %.2f\n", aluno.media);
}

int main() {
    Aluno alunos[3];
    for(int i = 0; i < 3; i++) {
        printf("Aluno %d\n", i+1);
        adicionarNotas(&alunos[i]);
        imprimirMedia(alunos[i]);
    }
    return 0;
}
