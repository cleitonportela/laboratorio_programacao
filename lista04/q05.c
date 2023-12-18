#include <stdio.h>
#define TAM 50

int main() {
    char str[TAM];
    char *pont;
    int count = 0;

    printf("Digite uma string: ");
    gets(str);

*pont = str;

    while(*pont != '\0') {
        count++;
        *pont++;
    }

    printf("Tamanho da string = %d\n", count);

    return 0;
}
