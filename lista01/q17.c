#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    puts("Digite um número");
    scanf("%d", &num);

    printf("O módulo de %d é %d\n", num, abs(num));

    return 0;
}