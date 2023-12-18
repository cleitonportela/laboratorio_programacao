#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 3

int main() {
    int vetor[TAM];
    float soma = 0, prod = 1, media_arit, media_geom;
    srand(time(0));
    for(int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 20;
        soma += vetor[i];
        prod *= vetor[i];
    }
    media_arit = soma / TAM;
    media_geom = pow(prod, 1.0/TAM);
    printf("Média aritmética: %.2f\n", media_arit);
    printf("Média geométrica: %.2f\n", media_geom);
    return 0;
}
