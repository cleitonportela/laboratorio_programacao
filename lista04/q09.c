#include <stdio.h>
#define TAM 5

int main() {
    int matriz[TAM], i, j, temp;

    printf("Digite %d números: ", TAM);
    for(i = 0; i < TAM; i++)
        scanf("%d", &matriz[i]);

    for(i = 0; i < TAM-1; i++) {
        for(j = 0; j < TAM-i-1; j++) {
            if(matriz[j] > matriz[j+1]) {
                temp = matriz[j];
                matriz[j] = matriz[j+1];
                matriz[j+1] = temp;
            }
        }
    }

    printf("Números ordenados: ");
    for(i = 0; i < TAM; i++)
        printf("%d ", matriz[i]);
    printf("\n");

    return 0;
}
