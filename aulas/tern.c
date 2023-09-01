#include <stdio.h>

int main(){

    int x;

    puts("Digite um número: ");
    scanf("%d", &x);

    (x%2)? puts("Impar"): puts("Par");


    return 0;
}