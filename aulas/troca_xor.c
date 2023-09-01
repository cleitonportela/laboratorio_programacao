#include <stdio.h>

int main(){

    unsigned x = 11;
    unsigned y = 7;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x = %u \n", x);
    printf("y = %u \n", y);

}