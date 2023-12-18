#include <stdio.h>

int main(){

    int anterior = 1, atual = 1;


    printf("%d ", atual);

    for(int i=1; i<=19; i++){
        
        if (atual == 1){
            printf("%d ", anterior);
        } else {
            printf("%d ", atual);
        }
        atual = anterior + atual;
        anterior = atual - anterior;
    }

    printf("\n");

}