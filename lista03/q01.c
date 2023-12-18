#include <stdio.h>
#define TAM 15

int main() {
    float vetor[TAM], min, max;
    printf("Digite 15 numeros: ");
    for(int i = 0; i < 15; i++) {
        scanf("%f", &vetor[i]);
        if(i == 0) {
            min = max = vetor[i];
        } else {
            if(vetor[i] < min) min = vetor[i];
            if(vetor[i] > max) max = vetor[i];
        }
    }
    printf("A soma do menor e maior elemento é: %.2f\n", min+max);
    return 0;
}
