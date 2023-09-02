#include <stdio.h>

int main(){

    float raio;

    puts("Digite o raio do circulo");
    scanf("%f", &raio);

    printf("O diâmetro do círculo é %.3f unidades de área\n", raio*2);
    printf("A circunferência do círculo é %.3f unidades de área\n", raio*2*3.14159);
    printf("A área do círculo é %.3f unidades de área\n", raio*raio*3.14159);

    return 0;
}