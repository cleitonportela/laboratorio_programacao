#include <stdio.h>

int main(){

    int idade;

    puts("Informe a sua idade");
    scanf("%d", &idade);

    if(idade >= 18) {
        puts("Você pode votar e dirigir");
    } else if (idade >= 16){
        puts("Você pode votar");
    } else {
        puts("Você não pode votar nem dirigir");
    }

    // Ternário

    // printf(idade >= 18 ? "Você pode votar e dirigir": (idade >= 16 ? "Você pode votar" : "Você não pode votar nem dirigir"));


    return 0;
}