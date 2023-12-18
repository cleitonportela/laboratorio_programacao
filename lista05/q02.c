#include <stdio.h>
#include <stdlib.h>

int* encontrarMIN(int* vet, int n) {
    int *min = vet;
    for (int i = 0; i < n; i++) {
        if (*(vet + i) < *min) {
            min = vet + i;
        }
    }
    return min;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Número de argumentos inválido.\n");
        return 1;
    }

    int n = argc - 1;
    int vet[n];

    for (int i = 0; i < n; i++) {
        vet[i] = atoi(argv[i + 1]);
    }

    int *min = encontrarMIN(vet, n);
    printf("Endereço do menor elemento: %p\n", min);

    return 0;
}
