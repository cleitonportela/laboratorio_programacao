#include <stdio.h>

int main(){

    int numero;


    puts("Digite um número inteiro");
    scanf("%d", &numero);

    int x = numero;
    int divisores = 0;

    for(int i=0; x!=0;i++){
        if((x % 10) == 7){  // obtém o valor do último digito
            divisores++; 
        }
        x = x / 10; // elimina o último digito 
    }  

    printf("O número %d possui %d vezes o número 7\n", numero, divisores);


    return 0;
}