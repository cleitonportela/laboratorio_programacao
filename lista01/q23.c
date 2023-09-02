#include <stdio.h>

int main(){

    int num, centena, dezena, unidade;

    puts("Digite um número inteiro de 3 digitos");
    scanf("%d", &num);

    centena = num / 100;
    dezena = (num - centena*100) / 10;
    unidade = num - centena*100 - dezena*10;

    printf("O inverso do número é %d%d%d\n", unidade, dezena, centena);

    return 0;
}