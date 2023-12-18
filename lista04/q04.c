#include <stdio.h>
#define TAM 5

int main() {
    int vec[TAM];
    int *pont;

    printf("Digite %d números: ", TAM);
    for(int i = 0; i < TAM; i++)
        scanf("%d", &vec[i]);

    pont = vec;

    printf("Valores e endereços do vetor:\n");
    for(int i = 0; i < TAM; i++)
        printf("Valor = %d, Endereço = %p\n", *(pont+i), pont+i);

    return 0;

    // Observei que os endereços contam de 4 em 4 bytes em sequência porque usei variável do tipo int
}
