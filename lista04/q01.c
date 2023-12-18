#include <stdio.h>

int main() {
    int num1 = 5, num2 = 10, sum;
    int *pont1, *pont2;

    pont1 = &num1;
    pont2 = &num2;

    sum = *pont1 + *pont2;

    printf("Soma = %d\n", sum);
    printf("Endereço da soma = %p\n", &sum);

    return 0;
}
