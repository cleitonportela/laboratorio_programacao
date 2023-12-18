#include <stdio.h>
#include <string.h>
#define TAM 50

int main() {
    char str1[TAM*2], str2[TAM];
    int i, j;
    printf("Digite a primeira string: ");
    fgets(str1, TAM, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, TAM, stdin);
    // Com strcat
    strcat(str1, str2);
    printf("String concatenada (com strcat): %s", str1);
    // Sem strcat
    for(i = 0; str1[i] != '\0'; ++i);
    for(j = 0; str2[j] != '\0'; ++j, ++i)
        str1[i] = str2[j];
    str1[i] = '\0';
    printf("String concatenada (sem strcat): %s", str1);
    return 0;
}
