#include <stdio.h>

int main(){

    int a, b;

    puts("Digite o primeiro limite:");
    scanf("%d", &a);
    puts("Digite o segundo limite:");
    scanf("%d", &b);

    if (b > a){
        printf("Quadrados dos números divisíveis por 4 entre %d e %d:\n", a, b);

        for(int i=a;i<=b;i++){
            if(i%4==0){
                printf("%d^2 = %d\n", i, i*i);
            }
        }
    } else{
        printf("Quadrados dos números divisíveis por 4 entre %d e %d:\n", b, a);

        for(int i=b;i<=a;i++){
            if(i%4==0){
                printf("%d^2 = %d\n", i, i*i);
            }
        }

    }

    return 0;
}