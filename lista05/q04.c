#include <stdio.h>
#define TAM 5

void print_values_and_addresses(int *pont, int size) {
    printf("Valores e endereços do vetor:\n");
    for(int i = 0; i < size; i++)
        printf("Valor = %d, Endereço = %p\n", *(pont+i), pont+i);
}

int main() {
    int vec[TAM];
    int *pont;

    printf("Digite %d números: ", TAM);
    for(int i = 0; i < TAM; i++)
        scanf("%d", &vec[i]);

    pont = vec;

    print_values_and_addresses(pont, TAM);

    return 0;
}
