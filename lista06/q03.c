#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define INI 0

typedef struct {
    int* vetor;
    int quantidade;
    float media;
} Estrutura;

void gerarVetor(Estrutura* estrutura) {
    srand(time(NULL));
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &estrutura->quantidade);
    estrutura->vetor = (int*) malloc(estrutura->quantidade * sizeof(int));
    int soma = 0;
    for(int i = 0; i < estrutura->quantidade; i++) {
        estrutura->vetor[i] = INI + rand() % MAX;
        soma += estrutura->vetor[i];
    }
    estrutura->media = (float) soma / estrutura->quantidade;
}

void imprimirMedia(Estrutura estrutura) {
    printf("A média é: %.2f\n", estrutura.media);
}

int main() {
    Estrutura estrutura;
    gerarVetor(&estrutura);
    imprimirMedia(estrutura);
    free(estrutura.vetor);
    return 0;
}
