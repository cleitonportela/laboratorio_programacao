#include <stdio.h>

int main(){

    int fatorial;

    for(int i=1; i<=10; i++){

        fatorial = 1;

        if(i%2){
            for(int j=i; j>1; j--){
                fatorial = fatorial * j;
            }
            printf("%d! = %d\n", i, fatorial);
        }
    }
    return 0;
}