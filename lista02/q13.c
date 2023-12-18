#include <stdio.h>

int main(){

    int a, b, soma = 0;

    puts("Digite o primeiro limite:");
    scanf("%d", &a);
    puts("Digite o segundo limite:");
    scanf("%d", &b);

    if (b > a){

        for(int i=a;i<=b;i++){
            if(!(i%2)){
                soma = soma + i;
            }
        }

        printf("Somatório dos números pares entre %d e %d = %d\n", a, b, soma);

    } else{

        for(int i=b;i<=a;i++){
            if(!(i%2)){
                soma = soma + i;
            }
        }

        printf("Somatório dos números pares entre %d e %d = %d\n", b, a, soma);

    }

    return 0;
}