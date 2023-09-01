#include <stdio.h>

int main(){

    int num;

    puts("Digite um número");
    scanf("%d", &num);

    printf("O seu sucessor é %d e seu antecessor é %d\n", num+1, num-1);

    return 0;
}