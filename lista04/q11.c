#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7
#define INI 0
#define MAX 7

int main() {
    int X[TAM], Y[TAM], M[TAM][TAM] = {0};
    srand(time(0));

    printf("X = ");
    for(int i = 0; i < TAM; i++) {
        X[i] = INI + rand() % MAX;
        printf("%d ", X[i]);
    }
    printf("\n");

    printf("Y = ");
    for(int i = 0; i < TAM; i++) {
        Y[i] = INI + rand() % MAX;
        printf("%d ", Y[i]);
    }
    printf("\n");

    for(int i = 0; i < TAM; i++) {
        M[X[i]][Y[i]]++;
    }

    printf("M = \n");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }

    return 0;
}
