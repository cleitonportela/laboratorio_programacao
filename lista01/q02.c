#include <stdio.h>

int main(){

    // ler um número x
    int x;
    puts("Digite um número: ");
    scanf("%d", &x);

    // imprimir o número x em hexadecimal e octal
    printf("Hexadecimal: %x \n", x);
    printf("Octal: %o \n", x);

    return 0;
}