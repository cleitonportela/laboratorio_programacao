#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7
#define MAX 7

int main() {
    int X[TAM], Y[TAM], M[TAM][TAM] = {0};
    srand(time(0));

    printf("X = ");
    for(int i = 0; i < TAM; i++) {
        X[i] = rand() % MAX;
        printf("%d ", X[i]);
    }
    printf("\n");

    printf("Y = ");
    for(int i = 0; i < TAM; i++) {
        float r = (float)(rand() % 11);

        if(r <= 3)
            Y[i] = X[i];
        else if(r <= 5)
            Y[i] = X[i] - 1;
        else if(r <= 7)
            Y[i] = X[i] + 1;
        else if(r <= 9)
            Y[i] = X[i] - 2;
        else
            Y[i] = X[i] + 2;

        printf("%d ", Y[i]);

        if(Y[i] >= 0 && Y[i] < TAM)
            M[X[i]][Y[i]]++;
    }
    printf("\n");

    printf("M = \n");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }

    return 0;
}
