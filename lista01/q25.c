#include <stdio.h>

int main(){

    int tempo, h, m, s;

    puts("Digite o tempo em segundos");
    scanf("%d", &tempo);

    h = (tempo / 60) / 60;
    m = (tempo / 60) - h * 60;
    s = tempo - h*60*60 - m*60;

    printf("%ds = %dh %dm %ds \n", tempo, h, m, s);

    return 0;
}