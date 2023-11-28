#include <stdio.h>

int main(){
    int num;


    do{
        puts("Digite um número inteiro positivo para calcular seu fatorial");
        scanf("%d", &num);
    } while(num<0);

    printf("%d! =", num);

    for(int i=num-1; i>=1; i--){
        num = num * i;
    }

    printf(" %d\n", num);

    return 0;
}