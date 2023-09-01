#include <stdio.h>

int main(){

    int num;

    puts("Digite um número");
    scanf("%d", &num);

    printf("%d elevado ao quadrado é %d\n", num, num*num);

    return 0;
}