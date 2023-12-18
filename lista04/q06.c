#include <stdio.h>
#define TAM 50

int main() {
    char str1[TAM], str2[TAM];
    char *pont1, *pont2;

    printf("Digite uma string: ");
    gets(str1);

    pont1 = str1;
    pont2 = str2;

    while(*pont1 != '\0') {
        *pont2 = *pont1;
        pont1++;
        pont2++;
    }
    *pont2 = '\0';

    printf("String copiada = %s\n", str2);

    return 0;
}
