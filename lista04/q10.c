#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7
#define INI 0
#define MAX 7

//não sei se pelo o exemplo os aleatórios devem ir até o tamanho máximo da matriz
//portanto, criei duas váriaveis separadas de TAM e MAX

int main() {
    int X[TAM], F[TAM] = {0};
    srand(time(0));

    for(int i = 0; i < TAM; i++) {
        X[i] = INI + rand() % MAX;
        F[X[i]]++;
    }

    printf("X = ");
    for(int i = 0; i < TAM; i++)
        printf("%d ", X[i]);
    printf("\n");

    printf("F = ");
    for(int i = 0; i < TAM; i++)
        printf("%d ", F[i]);
    printf("\n");

    return 0;
}
