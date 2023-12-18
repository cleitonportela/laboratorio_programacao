#include <stdio.h>
#define TAM 50

int main() {
    char str[TAM];
    int count = 0;
    printf("Digite uma string: ");
    fgets(str, TAM, stdin);
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    printf("A string tem %d caracteres.\n", count-1);
    return 0;
}