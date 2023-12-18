#include <stdio.h>

int main(){

    int num;

    puts("Digite um número inteiro de 5 dígitos para verificar se é um palíndromo");
    scanf("%d", &num);

    int digito[5];
    int divisor = 10000;

    for(int i = 4; i>=0; i--){
        digito[i] = (num / divisor)%10;
        divisor = divisor / 10;
        printf("digito[%d] = %d\n", i+1, digito[i]);
    }

    if((digito[4]==digito[0]) && (digito[3] == digito[1])){
        printf("O número é um palíndromo\n");
    } else {
        printf("O número não é um palíndromo\n");
    }

    return 0;
}