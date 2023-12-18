#include <stdio.h>

int main(){

    int num;

    puts("Digite um número inteiro para saber sua tabuada");
    scanf("%d", &num);

    for(int i=1; i<=10; i++){
        printf("%dx%d = %d\n", num, i, num*i);
    }

    return 0;
}