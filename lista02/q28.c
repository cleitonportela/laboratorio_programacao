#include <stdio.h>

int main() {
    unsigned char X, Y;
    unsigned char array[10];

    printf("Digite o valor de X: ");
    scanf("%hhu", &X);

    printf("Digite o valor de Y (maior que 5): ");
    scanf("%hhu", &Y);

    if(Y < 5) {
        printf("Erro: Y deve ser maior que 5.\n");
        return 1;
    }

    for(int i = 0; i < 10; i++) {
        if(i >= Y-5 && i <= Y+5) {
            array[i] = X;
        } else {
            array[i] = 0;
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("%hhu ", array[i]);
    }

    printf("\n");

    return 0;
}