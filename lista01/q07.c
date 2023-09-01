#include <stdio.h>

int main(){
    int tempo, total = 0;

    puts("Digite a quantidade de horas");
    scanf("%d", &tempo);
    total = tempo * 60;

    puts("Digite a quantidade de minutos");
    scanf("%d", &tempo);
    total = (tempo + total)*60;

    puts("Digite a quantidade de segundos");
    scanf("%d", &tempo);
    total = (tempo + total);

    printf("Total de segundos: %ds\n", total);

    return 0;
}