#include <stdio.h>
#include <math.h>

int main(){

    float x_in, x_fin, y_in, y_fin, d;

    puts("Digite o valor de x inicial");
    scanf("%f", &x_in);
    puts("Digite o valor de x final");
    scanf("%f", &x_fin);
    puts("Digite o valor de y inicial");
    scanf("%f", &y_in);
    puts("Digite o valor de y final");
    scanf("%f", &y_fin);

    d = sqrt(pow((x_fin-x_in), 2)+pow((y_fin-y_in), 2));

    printf("Distância entre os dois pontos: %.2f u.a\n", d);

    return 0;
}