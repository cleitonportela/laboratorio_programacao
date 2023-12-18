#include <stdio.h>

int encontrarMin(int num, int min) {
    if(num < min)
        return num;
    else
        return min;
}

int main() {
    int num, min;
    char ch;

    printf("Digite um número: ");
    scanf("%d", &num);
    min = num;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        min = encontrarMin(num, min);

        printf("Menor até agora = %d\n", min);

        printf("Deseja continuar? Digite s para sim(s/n)? ");
        scanf(" %c", &ch);
    } while(ch == 's' || ch == 'S');

    printf("Valor mínimo: %d\n", min);

    return 0;
}
