#include <stdio.h>

int main(){

    int num;

    puts("Digite um número:");
    scanf("%d", &num);

    printf("Triplo do número: %d \n", num * 3);  
    printf("Quadrado do número: %d \n", num * num);  
    printf("Meio do número: %.2f \n", (double) (num/2.0));  

}