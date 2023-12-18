#include <stdio.h>

int main(){
    int n, maior, menor;


    puts("Digite um número inteiro ou 0 para sair");
    scanf("%d", &n);

    if (n == 0) return(0);

    maior = n;
    menor = n;

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    while(n != 0) {
        puts("Digite um número inteiro ou 0 para sair");
        scanf("%d", &n);

        if (n > maior) maior = n;
        if (n < menor) menor = n;

        printf("Maior número: %d\n", maior);
        printf("Menor número: %d\n", menor);

    } 

    return 0;
}