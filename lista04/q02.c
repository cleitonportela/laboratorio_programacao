#include <stdio.h>

int main() {
    int num1, num2, temp;
    int *pont1, *pont2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    pont1 = &num1;
    pont2 = &num2;

    printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);

    temp = *pont1;
    *pont1 = *pont2;
    *pont2 = temp;

    printf("Depois da troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
