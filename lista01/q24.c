#include <stdio.h>

int main(){

    int x, n;

    puts("Digite o valor de x");
    scanf("%d", &x);
    puts("Digite o valor de n");
    scanf("%d", &n);

    // x * (2 << n - 1)

    printf("%d*(2^%d) = %d\n", x, n, x * (2 << n - 1));

    return 0;
}