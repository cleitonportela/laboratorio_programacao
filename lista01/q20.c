#include <stdio.h>

int main(){

    int num;

    puts("Digite um número");
    scanf("%d", &num);

    num%2 ? printf("O número é ímpar\n") : printf("O número é par\n");

    return 0;
}