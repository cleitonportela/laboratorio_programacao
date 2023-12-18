#include <stdio.h>
#include <stdlib.h>

void calcular(int a, int b, char op) {
    if (op == 1) {
        printf("Resultado: %d\n", a + b);
    } else if (op == 2) {
        printf("Resultado: %d\n", a * b);
    } else {
        printf("Operação inválida.\n");
    }
}

// operacao 1 = soma e 2 = multiplicação

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Digite os dois numeros e a operação\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int op = atoi(argv[3]);

    calcular(a, b, op);

    return 0;
}

