#include <stdio.h>

int main(){

    int a, b;

    puts("Digite o valor de A: ");
    scanf("%d", &a);
    puts("Digite o valor de B: ");
    scanf("%d", &b);

    b = a + b;
    a = b - a;
    b = b - a;

    printf("A: %d \n", a);
    printf("B: %d \n", b);
    
    return 0;
}