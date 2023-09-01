#include <stdio.h>

int main(){
    int dias;
    float total;

    puts("Digite a quantidade de dias trabalhado pelo o vendedor");
    scanf("%d", &dias);

    if(dias <= 10){
        total = dias * 50.25 * 0.9;
    } else if(dias <= 20){
        total = (dias * 50.25 * 1.20) * 0.9;
    } else {
        total = (dias * 50.25 * 1.30) * 0.9;
    }

    printf("O vendor trabalho %d dias e receberá %.2f reais\n", dias, total);

    return 0;
}