#include <stdio.h>
#include <string.h>
#define TAM 50

int main() {
    char str1[TAM], str2[TAM];
    int i, flag = 0;
    printf("Digite a primeira string: ");
    fgets(str1, TAM, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, TAM, stdin);
    // Com strcmp
    if(strcmp(str1, str2) == 0)
        printf("As strings são iguais (com strcmp).\n");
    else
        printf("As strings não são iguais (com strcmp).\n");
    // Sem strcmp
    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0 && str1[i] == '\0' && str2[i] == '\0')
        printf("As strings são iguais (sem strcmp).\n");
    else
        printf("As strings não são iguais (sem strcmp).\n");
    return 0;
}
