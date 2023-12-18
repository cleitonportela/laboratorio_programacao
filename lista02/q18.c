#include <stdio.h>

int main(){

    long double graos = 0;
    long double j = 1;

    for(int i=1; i<=64;i++){
        graos = graos + j;
        j = j*2;
    }

    printf("Somatório dos grãos: %.Lf\n", graos);

    return 0;
}