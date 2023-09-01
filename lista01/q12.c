#include <stdio.h>

int main(){

    int num1, num2;

    puts("Digite o primeiro número: ");
    scanf("%d", &num1);
    puts("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("A soma dos dois número é: %d \n", (num1 + num2));
    printf("A diferença dos dois número é: %d \n", (num1 - num2));
    printf("O produto dos dois número é: %d \n", (num1 * num2));
    printf("O quociente dos dois número é: %d \n", (num1 / num2));
    printf("O resto da divisão dos dois números é: %d \n", (num1 % num2));

    return 0;
}