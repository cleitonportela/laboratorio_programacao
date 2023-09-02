#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;

    puts("Digite o primeiro número");
    scanf("%f", &a);
    puts("Digite o segundo número");
    scanf("%f", &b);
    puts("Digite o terceiro número");
    scanf("%f", &c);

    printf("Média aritmética: %.3f\n", (a+b+c)/3);
    printf("Média geométrica: %.3f\n", pow((a*b*c), 1.0/3.0));

    return 0;
}