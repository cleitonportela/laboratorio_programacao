#include <stdio.h>

int main(){

    int a, b;
    float media = 0;

    puts("Digite o primeiro número da faixa");
    scanf("%d", &a);
    puts("Digite o segundo número da faixa");
    scanf("%d", &b);

    if(b > a){
        for(int i=a; i<=b; i++){
            media = media + i;
        }
        media = media / (b-a+1);

    } else {
        for(int i=b; i<=a; i++){
            media = media + i;
        }
        media = media / (a-b+1);
    }

    printf("Média aritmética: %.2f\n", media);

    return 0;
}