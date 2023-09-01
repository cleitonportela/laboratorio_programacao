#include <stdio.h>

int main(){

    float altura;
    char sexo;

    puts("Digite a altura em metros");
    scanf("%f", &altura);
    puts("Digite M para sexo masculino ou F para sexo feminino");
    scanf("%s", &sexo);

    if(sexo == 'M'){
        printf("O peso ideal da pessoa é %.2f kg\n", (72.7*altura - 58));
    } else if (sexo == 'F') {
        printf("O peso ideal da pessoa é %.2f kg\n", (62.1*altura - 44.7));
    } else {
        printf("Sexo digitado incorreto\n");
    }

    return 0;
}