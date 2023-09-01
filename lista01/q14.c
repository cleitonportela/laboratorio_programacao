#include <stdio.h>

int main(){

    float graus;

    puts("Digite a temperatura em graus celsius para coverter");
    scanf("%f", &graus);

    printf("%.2f °C correspondem a %.2f farenheits\n", graus, (9*graus+160)/5);

    return 0;
}