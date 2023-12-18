#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define INI 1
#define MAX 10

int main() {
    int matriz[TAM][TAM], x, count = 0;
    srand(time(0));
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    printf("Matriz gerada:\n");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            matriz[i][j] = INI + rand() % MAX;
            printf("%d ", matriz[i][j]);
            if(matriz[i][j] == x)
                count++;
        }
        printf("\n");
    }
    printf("O número %d aparece %d vezes na matriz.\n", x, count);
    return 0;
}
