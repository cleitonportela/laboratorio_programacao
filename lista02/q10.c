#include <stdio.h>

int main(){

    puts("Quadrados dos números divisíveis por 4 entre 15 e 90:");

    for(int i=15;i<=90;i++){

        if(i%4==0){
            printf("%d^2 = %d\n", i, i*i);
        }

    }    

    return 0;
}