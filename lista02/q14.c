#include <stdio.h>

int main(){

    int a, b, qtd = 0;

    puts("Digite o primeiro limite:");
    scanf("%d", &a);
    puts("Digite o segundo limite:");
    scanf("%d", &b);

    if (b > a){

        for(int i=a;i<=b;i++){
            if(!(i%3)){
                qtd++;
            }
        }

        printf("Quantidade de números divisíveis por 3 entre %d e %d = %d\n", a, b, qtd);

    } else{

        for(int i=b;i<=a;i++){
            if(!(i%3)){
                qtd++;
            }
        }

        printf("Quantidade de números divisíveis por 3 entre %d e %d = %d\n", b, a, qtd);

    }

    return 0;
}