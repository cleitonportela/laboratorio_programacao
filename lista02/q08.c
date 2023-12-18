#include <stdio.h>

int main(){
    float valor;
    int prestacoes;

    puts("Digite o valor do produto");
    scanf("%f", &valor);

    prestacoes = valor/3;

    printf("Entrada de valor %.2f e prestações de %d\n", valor - prestacoes*2, prestacoes);

    return 0;
}