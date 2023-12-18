#include <stdio.h>

int main(){

    double pi = 0;
    int sinal = 1; 
    int termos = 100; 

    printf("Valor de pi por n-termo:\n");

    for(int n = 0; n < termos; n++){
        
        pi = pi + sinal * 4.0 / (2*n + 1);
        printf("Pi(%d) = %.15f\n", n+1, pi);
        sinal = -sinal;
        
    }

    return 0;
}