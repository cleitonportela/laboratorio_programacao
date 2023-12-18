#include <stdio.h>

#define TAM 100

int main() {
    char str[TAM], rev[TAM];
    int i, j, count = 0;
    printf("Digite uma string: ");
    fgets(str, TAM, stdin);
    while (str[count] != '\0')
        count++;
    j = count - 1;
    for (i = 0; i < count; i++) {
        rev[i] = str[j];
        j--;
    }
    rev[i] = '\0';
    printf("String reversa: %s\n", rev);
    return 0;
}
