#include <stdio.h>

int main() {
    int num, max, min;
    printf("Digite um número: ");
    scanf("%d", &num);

    max = num;
    min = num;

    while(num >= 0 || num % 2 != 0) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num > max) {
            max = num;
        }

        if(num < min && num >= 0) {
            min = num;
        }
    }

    printf("O produto do maior(%d) pelo menor número(%d) é: %d\n", max, min, max*min);

    return 0;
}
