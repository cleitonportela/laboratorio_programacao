#include <stdio.h>

int main(){

    int num1, num2;

    puts("Digite o primeiro número");
    scanf("%d", &num1);
    puts("Digite o segundo número");
    scanf("%d", &num2);

    !(num1%num2) ? printf("%d é múltiplo de %d\n", num1, num2) : printf("%d não é múltiplo de %d\n", num1, num2);

    return 0;
}