#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void selecao(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void bolha(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main() {
    int vetor[TAM], min, max;
    srand(time(0));
    printf("Digite o intervalo (min): ");
    scanf("%d", &min);
    printf("Digite o intervalo (max): ");
    scanf("%d", &max);
    for(int i = 0; i < TAM; i++)
        vetor[i] = min + rand() % (max - min + 1);
    selecao(vetor, TAM);
    printf("Vetor ordenado (ordenação por seleção): ");
    for(int i = 0; i < TAM; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    bolha(vetor, TAM);
    printf("Vetor ordenado (ordenação bolha): ");
    for(int i = 0; i < TAM; i++)
        printf("%d ", vetor[i]);
    printf("\n");
    return 0;
}
