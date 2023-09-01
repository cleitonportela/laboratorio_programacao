#include <stdio.h>

int main(){

    int num1, num2, res;
    int op;

    puts("Digite o primeiro número: ");
    scanf("%d", &num1);
    puts("Digite o segundo número: ");
    scanf("%d", &num2);

    puts("Escolha uma das seguintes operações");
    puts("1 - Soma");
    puts("2 - Subtração");
    puts("3 - Multiplicação");
    puts("4 - Divisão");

    scanf("%d", &op);

    switch(op){
        case 1:
            res = num1 + num2;
            printf("%d", res);
            break;
        case 2:
            printf("%d", num1 - num2);
            break;
        case 3:
            printf("%d", num1 * num2);
            break;
        case 4:
            printf("%.2f", (double) num1 / num2);
            break;
        default:
            puts("Operação inválida");
    }

    return 0;
}