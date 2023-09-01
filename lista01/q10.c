#include <stdio.h>

int main(){

    float vol, comp, larg, alt;

    puts("Digite o comprimento: ");
    scanf("%f", &comp);
    puts("Digite a largura: ");
    scanf("%f", &larg);
    puts("Digite a altura: ");
    scanf("%f", &alt);

    vol = comp * larg * alt;

    printf("O volume total é %.2f unidades de área", vol);
}