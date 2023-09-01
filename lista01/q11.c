#include <stdio.h>

int main(){
    
    float dol, real;

    puts("Digite a cotação atual do dolar: ");
    scanf("%f", &dol);

    puts("Digite a quantidade em reais para se converter: ");
    scanf("%f", &real);

    dol = real/dol;

    printf("%.2f reais corresponde a %.2f dólares", real, dol);

    return 0;
}