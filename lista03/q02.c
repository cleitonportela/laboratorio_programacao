#include <stdio.h>
#define TAM 50

int main() {
    char str[TAM], ch;
    int contem = 0;
    printf("Digite uma string: ");
    fgets(str, TAM, stdin);
    printf("Digite um caractere: ");
    scanf("%c", &ch);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
         contem = 1;
            break;
        }
    }
    if (contem)
        printf("A string contém o caractere '%c'.\n", ch);
    else
        printf("A string não contém o caractere '%c'.\n", ch);
    return 0;
}
  