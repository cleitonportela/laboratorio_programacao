#include <stdio.h>

int main(){
    int a, b=0;

    puts("Digite o dividendo");
    scanf("%d", &a);

    while(b == 0){
        puts("Digite o divisor sendo diferente de 0");
        scanf("%d", &b);
    }

    printf("%d / %d = %.2f\n", a, b, (float)a/b);

    return 0;
}