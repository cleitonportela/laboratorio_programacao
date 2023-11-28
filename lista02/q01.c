#include <stdio.h>

int main(){
    char dia = 10; //evite a situação que char pode ter 0 e saí na primeira verificação

    while(dia!='0'){
        puts("Digite um número entre 1 e 7 para saber o dia da semana ou 0 para sair");
        scanf(" %c", &dia);

        switch(dia){
            case '0':
                puts("Você escolheu sair");
                break;
            case '1':
                puts("Dia 1 é domingo");
                break;
            case '2':
                puts("Dia 2 é segunda");
                break;
            case '3':
                puts("Dia 3 é terça");
                break;
            case '4':
                puts("Dia 4 é quarta");
                break;
            case '5':
                puts("Dia 5 é quinta");
                break;
            case '6':
                puts("Dia 6 é sexta");
                break;
            case '7':
                puts("Dia 7 é sábado");
                break;
            default:
                puts("Número fora da sequência");
                break;
        }

    } 

    return 0;
}