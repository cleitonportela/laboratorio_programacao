#include <stdio.h>

int main(){

    float num;

    puts("Digite um número real: ");
    scanf("%f", &num);

    printf("Número com 1 casa decimal: %.1f", num);

    return 0;
}