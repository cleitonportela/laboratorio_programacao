#include <stdio.h>

int main(){

    float conta;

    puts("Digite o valor da conta");
    scanf("%f", &conta);

    printf("O total a ser pago com a comissão de 10%% do garçom é: %.2f \n", conta*1.1);

    return 0;
}