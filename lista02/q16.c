#include <stdio.h>

int main(){

    int soma = 0;

    for(int i=0; i<=200; i++){

        if(i<=100 & (i%3==0)){
            soma = soma + i;
        }
        if(i>=100 & i<=200 & (i%5==0)){
            soma = soma + i;
        }

    }

    printf("Somatório: %d\n", soma);

    return 0;
}