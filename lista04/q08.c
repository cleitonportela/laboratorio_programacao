#include <stdio.h>
#define TAM 50

int main() {
    char str[TAM], ch, *pont;
    int encontrar = 0;

    printf("Digite uma string: ");
    gets(str);
    printf("Digite um caractere para buscar: ");
    scanf(" %c", &ch);

    pont = str;

    while(*pont != '\0') {
        if(*pont == ch) {
            encontrar = 1;
            break;
        }
        pont++;
    }

    if(encontrar)
        printf("Caractere '%c' encontrado na string.\n", ch);
    else
        printf("Caractere '%c' não encontrado na string.\n", ch);

    return 0;
}
