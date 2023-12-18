#include <stdio.h>

int main(){

    int fahr;

    for(int c = 10; c<=100; c=c+10){

        printf("%d°C = %.2f°F\n", c, c*1.8 +32);

    }

    return 0;
}