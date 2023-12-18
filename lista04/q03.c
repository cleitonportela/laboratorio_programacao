#include <stdio.h>

int main() {
    int num, min;
    char ch;

    printf("Digite um número: ");
    scanf("%d", &num);
    min = num;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num < min)
            min = num;

        printf("Menor até agora = %d\n", min);

        printf("Deseja continuar? Digite s para sim(s/n)? ");
        scanf(" %c", &ch);
    } while(ch == 's' || ch == 'S');

    return 0;
}
