#include <stdio.h>
#define TAM 50

int main() {
    char str1[TAM], str2[TAM];
    char *pont1, *pont2;

    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);

    pont1 = str1;
    pont2 = str2;

    while(*pont1 != '\0')
        pont1++;

    while(*pont2 != '\0') {
        *pont1 = *pont2;
        pont1++;
        pont2++;
    }
    *pont1 = '\0';

    printf("Strings concatenadas = %s\n", str1);

    return 0;
}
